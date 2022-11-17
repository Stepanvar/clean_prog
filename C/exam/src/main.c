#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <stdio.h>
#include <string.h>

typedef struct s_data
{
	char *args[1000];
	int pipe[2];
	int next;
}t_data;

int ft_strlen(char * str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}

void ft_error(int fd, char *str1, char *str2)
{
	write(fd, str1, ft_strlen(str1));
	if (str2)
		write(fd, str2, ft_strlen(str2));
	write(fd, "\n", 1);
}

void parse(t_data *data, char **argv)
{
	int i = 1;
	int j = 0;
	int cmd = 0;
	while (argv[i])
	{
		if (strcmp(argv[i], "|") == 0)
		{
			data[cmd].next = 2;
			j = 0;
			cmd++;
		}
		else if (strcmp(argv[i], ";") == 0)
		{
			data[cmd].next = 1;
			j = 0;
			cmd++;
		}
		else
		{
			data[cmd].next = 1;
			data[cmd].args[j] = argv[i];
			j++;
		}
		i++;
	}
}

void run(t_data *data, char **env)
{
	int i = 0;
	int res = 0;
	while (data[i].next != 0)
	{
		if (data[i].args[0] != NULL && strcmp(data[i].args[0], "cd") == 0)
		{
			if (data[i].args[2] != NULL || data[i].args[1] == NULL ||data[i].args[1][0] == '-' )
				ft_error(2, "error: bad", NULL);
			else if (chdir(data[i].args[1]) < 0)
				ft_error(2, "cannot exe", NULL);
			exit(1);
		}
		else
		{
			if (data[i].next == 2)
				pipe(data[i].pipe);
			res = fork();
			if (res == 0)
			{
				if (data[i].pipe[1] != 0)
					dup2(data[i].pipe[1], 1);
				if (i != 0 && data[i - 1].next == 2 )
					dup2(data[i-1].pipe[0], 0);
				if (data[i].args[0] != 0 && execve(data[i].args[0], data[i].args, env) < 0)
					ft_error(2, "error", data[i].args[0]);
				exit(1);
			}
			else
			{
				waitpid(res, NULL, 0);
				if (data[i].pipe[1] != 0)
					close(data[i].pipe[1]);
				if (i != 0 && data[i - 1].next == 2 )
					close(data[i-1].pipe[0]);
			}
		}
		i++;
	}
	
}

int main(int argc, char **argv, char **env)
{
	t_data data[1000];
	if (argc > 1)
	{
		parse(data, argv);
		run(data, env);
	}
	return 0;
}