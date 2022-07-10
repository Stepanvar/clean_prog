#include "stdio.h"
#include "unistd.h"
#include "stdarg.h"
#include "stdlib.h"
int nbrlen(long num, int base)
{
	int i = 0;
	while (num)
	{
		num /= base;
		i++;
	}
	return (i);
}

void	ft_putnbr(long num, int bsl, char *base)
{
	if (num / bsl)
		ft_putnbr(num / bsl, bsl, base);
	write(1, &base[num % bsl], 1);
}

int ft_printf(const char *string, ...)
{
	char *str;
	int reslen = 0;
	int len;
	long x;
	long d;
	char *stra;
	int neg = 0;
	va_list p;

	va_start(p, string);
	str = string;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == 's')
			{
				stra = va_arg(p, char *);
				if (!stra)
					stra = "(null)";
				while (stra[len])
					len++;
			}
			else if (*str == 'd')
			{
				d = va_arg(p, int);
				if (d < 0 )
				{
					neg = 1;
					d = -d;
				}
				len = nbrlen(d, 10);	
			}
			else if (*str == 'x')
			{
				x = va_arg(p, unsigned int);
				len = nbrlen(x, 16);
			}
			if (*str == 's' && len > 0)
				reslen += write(1, stra, len);
			else if (*str == 'd' && len > 0)
			{
				if (neg > 0)
					reslen += write(1, "-", 1);
				reslen += len;
				ft_putnbr(d, 10, "0123456789");
			}
			else
			{
				reslen += len;
				ft_putnbr(x, 16, "0123456789abcdef");
			}
		}
		else
		{
			reslen += write(1, str, 1);
		}
		str++;
	}
	va_end(p);
	return reslen;

}

int gnl(char **line)
{
	int rd;
	int i = 0;
	char *buf;
	char c;
	buf = (char *)malloc(100000);
	*line = buf;
	rd = read(0, &c, 1);
	while (rd > 0 && c != '\n')
	{
		rd = read(0, &c, 1);
		buf[i++] = c;
	}
	buf[i] = '\0';
	return (i);
}

int	main(void)
{
	int	z;
	char	*ptr;
	int	arr[3];
	z = 15;
	ptr = "Hello";
	ft_printf("z = %d\n", z);
	ft_printf("x = %x\n", z);
	ft_printf("len = %d\n", ft_printf("ptr = %s\n", ptr));
	printf("len = %d\n", printf("ptr = %s\n", ptr));
	ft_printf("%d\n", gnl(&ptr));
	return (0);

}
