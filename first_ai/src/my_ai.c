#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include <math.h>

#define _weight 3
double	w[_weight];

double	ft_a(double var)
{
	// normalize result with sigmoid
	//var = 1 * 1.0 / (1 + pow(2.7318281828, var * -1.0));
	if (var > 0)
		return (1);
	else 
		return (0);
}

double	ft_ai(double arr[3])
{
	double	res = 0;
	int		k = 0;
	while (k < _weight)
	{
		res += w[k] * arr[k];
		k++;
	}
	return (res);
}

void	ft_train(double set[4][3], double expect[4])
{
	double res;
	int	i, j, l;

	i = 0;
	while (i < 50)
	{
		l = 0;
		while (l < 4)
		{
			j = 0;
			res = ft_a(ft_ai(set[l]));
			while (j < _weight)
			{
				w[j] = w[j] + 0.1 * (expect[l] - res) * set[l][j];
				j++;
			}
			l++;
		}
		i++;
	}
}

int	main(void)
{
	double	mass[4][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}, {1, 0, 1}};
	double	out[4] = {1, 0, 0, 1};
	double	work[3] = {1, 0, 0};
	int		i = 0;
	double	res = 0;
	srand(time(NULL));
	while (i < _weight)
	{
		w[i] = rand() * 1.0 / RAND_MAX;
		i++;
	}
	ft_train(mass, out);
	res = ft_ai(work);
	printf("%f\t%f\t%f\n", w[0], w[1], w[2]);
	printf("%f\n", ft_a(res));
	return (0);
}