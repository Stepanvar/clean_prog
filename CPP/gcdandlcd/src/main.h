#ifndef MAIN_H
# define MAIN_H
#include <cstdint>

double ft_get_mean_time(int32_t (*func)(int32_t, int32_t, int32_t (*func2)(int32_t, int32_t)), int32_t (*func2)(int32_t, int32_t));
int32_t	ft_lcd(int32_t x, int32_t y, int32_t (*func)(int32_t, int32_t));
int32_t	ft_recurse_gcd(int32_t a, int32_t b);
int32_t	*ft_sort_nums(int32_t a, int32_t b);
int32_t ft_cycle_gcd(int32_t a, int32_t b);
#endif