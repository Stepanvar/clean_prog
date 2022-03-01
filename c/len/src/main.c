#include "stdio.h"
#include "libft.h"
#include "ft_atoi.h"
;
int	main(void)
{
	int	i;
	char	*str;

	str = "Hello my boy";
	i = 0;
	i = ft_strlen(str);
	printf("%d\n", i);
	i = ft_atoi(str);
	printf("%d\n", i);
	return (0);
}
