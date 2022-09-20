#ifndef LIBFT_H
# define LIBFT_H
typedef struct t_num{
	int i;
	char    *comment;
	struct t_num   *next;
} s_num;
s_num   *list_bubble_sort(s_num *list);
int	ft_strlen(const char *str);
void	ft_itoa(int n);
int	ft_printf(const char *s, ...);
unsigned char ft_putchar(unsigned char c);
int ft_print_alphabet(void);
unsigned int	*ft_gen_rnd_nums(unsigned int count, unsigned int maxvalue);
unsigned int	*ft_find_nums_frequency(unsigned int *set, unsigned int count, unsigned int maxvalue);
unsigned int	*ft_calloc(unsigned int count);
int ft_print_rnd_hyst(unsigned int count, unsigned int maxvalue);
unsigned int ft_atoui(char *nbr);
#endif
