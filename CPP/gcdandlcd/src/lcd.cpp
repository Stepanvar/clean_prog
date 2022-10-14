#include "main.h"
int32_t	ft_lcd(int32_t x, int32_t y, int32_t (*func)(int32_t, int32_t))
{
	int32_t gcd = 0;
	int32_t lcd = 0;
	gcd = func(x, y);
	lcd = x * y / gcd;
	return lcd;
}
