#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define _weight 3
double	w[_weight];
double	ft_a(double var)
{
	if (var > 0)
		return 1;
	else
		return 0;
}

double	ft_rp(double i[3])
{
	int j = 0;
	double res = 0;
	while (j < 3)
	{
	
		res += i[j] * w[j];
		j++;
	}
	return (res);
}

void	ft_pr(double a[3])
{
	int i;

	i = 0;
	while (i < 3)
	{
		printf("%f\n", a[i]);
		i++;
	}
	printf("\n");
}

int main(void)
{
	int		i;
	int		j;
	double	res;
	double	a[3][3] = {{0, 0, 1}, {0, 1, 1}, {1, 0, 0}};
	double	ans[3] = {1, 1, 0};

	i = 0;
	j = 0;
	res = 0;
	srand(time(0));
	while (i < _weight)
	{
		w[i] = rand() * 1.0 / RAND_MAX + 0.000001;
		i++;
	}
	i = 0;
	printf("w old\n");
	ft_pr(w);
	while (j < 3)
	{
		i = 0;
		res = (double) ft_rp(a[j]);
		while (i < 3)
		{
			w[i] += (0.1 * (ans[j] - res) * a[j][i]);
			i++;
		}
		printf("%d = %f\n", j, res);
		ft_pr(w);
		j++;
	}
	//printf("w\n");
	// while (i < 4)
	// {
	// 	w[i] = rand() * 1.0 / RAND_MAX;
	// 	while (w[i] != 1)
	// 	{
	// 		w[i] = w[i] + ((1 - w[i]) * 0.1);
	// 	}
	// 	printf("%d", w[i]);
	// 	i++;
	// }
	return (0);
}