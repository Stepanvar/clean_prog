#include "stdio.h"
#include "libft.h"
int	main(void)
{
	int	i;
	char	*str;

	str = "Hello my boy";
	i = 0;
	i = ft_strlen(str);
	while (i)
		i++;
	printf("%d\n", i);
	return (0);
}
