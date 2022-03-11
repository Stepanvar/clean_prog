#include "libft.h"
#include "unistd.h"
#include "stdarg.h"

typedef	struct s_fl
{
	//struct
	int	len;
	int	pre;
	int	wid;
	char	func;
}	t_fl;

static	t_fl	ft_hspec(const char *s, t_fl f)
{
	//get width and precision
	int	i;

	i = 0;
	while ('0' <= s[i] && s[i] <= '9')
		f.wid = f.wid * 10 + s[i++] - '0';
	if (s[i] == '.')
	{
		i++;
		while ('0' <= s[i] && s[i] <= '9')
			f.pre = f.pre * 10 + s[i++] - '0';
	}
	//get func character
	f.func = s[i];
	return (f);
}

static	t_fl	ft_putall(char *s, t_fl f, int len)
{
	//print with wid and pre
	if (!f.pre || len < f.pre)
		f.pre = len;
	f.wid = f.wid - f.pre;
	while (f.wid-- > 0)
		f.len += write(1, " ", 1);
	f.len += write(1, s, f.pre);
	return (f);
}

static int	fs(void	*v, t_fl f)
{
	//write string with spec
	char	*s;
	int	i = 0;
	s = (char *)v;
	while (s[i])
		i++;
	f = ft_putall(s, f, i);
	return (f.len);
}

static int	ft_harg(va_list p, const char *s, t_fl f)
{
	//find specs via func
	//send va_arg to certain function
	int	(*fm[4])(void *, t_fl) = {&fs};
	f = ft_hspec(++s, f);
	/*ft_itoa(f.wid);
	write(1, "\n", 1);
	ft_itoa(f.pre);
	write(1, "\n", 1);*/
	if (f.func == 's')
		f.len = (*fm[0])(va_arg(p, void *), f);
	return (f.len);
}

static t_fl	ft_init_f(t_fl f)
{
	//init all struct
	f.len = 0;
	f.pre = 0;
	f.wid = 0;
	f.func = '0';
	return (f);
}

static int	ft_find_spec(va_list p, const char *s)
{
	//print characters if % send it in harg
	int	i;
	t_fl	f;

	i = 0;
	f = ft_init_f(f);
	while (s[i])
	{
		//f.len return all len of the read arg
		if (s[i] == '%')
		{
			f.len = ft_harg(p, &(s[i]), f);
			while ((s[i] != 's' && s[i] != 'd' && s[i] != 'x') && s[i])
				i++;
		}
		else
			f.len += write(1, &(s[i]), 1);
		i++;
	}
	return (f.len);
}

int	ft_printf(const char *s, ...)
{
	va_list p;
	int	len;

	len = 0;
	va_start(p, s);
	len = ft_find_spec(p, s);
	va_end(p);
	return (len);
}
