#include "unistd.h"

int	main(int argc, char *argv[])
{
	//hash of chars
	int	i,j;

	i = 0;
	j = 0;
	int	hash[255];
	//1 init hash
	while (i < 255)
	{
		hash[i] = 0;
		i++;
	}
	i = 0;
	if (3 == argc)
	{
	//algo: cycle pass the first string if this letter is not in hash and in the second string
	while (argv[1][i])
	{
		if (0 == hash[(unsigned char)argv[1][i]])
		{
			hash[(unsigned char)argv[1][i]] = 1;
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					write(1, &(argv[1][i]), 1);
					break ;
				}
				j++;
			}
		}
		i++;
	}
	}
	write(1, "\n", 1);
	return (0);
}
