#ifndef LIBFT_H
# define LIBFT_H
typedef struct t_num {
    int i;
    char    *comment;
    t_num   *next;
} s_num;
s_num   *list_bubble_sort(s_num *list);
int	ft_strlen(const char *str);
void	ft_itoa(int n);
int	ft_printf(const char *s, ...);
#endif
