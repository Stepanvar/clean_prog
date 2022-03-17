#include "stdlib.h"
#include "libft.h"
#include "stdio.h"
#include "time.h"

char	*ft_strjoin(char *command, char *s)
{
	char	*join;
	int	i = 0;
	int	j = 0;
	//malloc join, assign all, return join
	join = (char *) malloc(ft_strlen(command) + ft_strlen(s) + 1);
	while  (command[i])
	{
		join[i] = command[i];
		i++;
	}
	while (s[j])
	{
		join[i + j] = s[j];
		j++;
	}
	join[j + i] = 0;
	return (join);
}

int	main(void)
{
	char	s[20];
	int	fd = 0;
	int	num = 0;
	char	*command;
	time_t	start = time(NULL);
	ft_printf("Enter what will you do\n");
	scanf("%s", s);
	while (time(NULL) < start + 10)
		num++;
	command = "termux-toast -b black -g bottom Time_passed ";
	command = ft_strjoin(command, s);
	system(command);
	free(command);
	command = NULL;
	return (0);
}
