#include <unistd.h>


void	print_digits(int d1, int d2, int d3, int last)
{
	char	c;

	c = '0' + d1;
	write(1, &c, 1);
	c = '0' + d2;
	write(1, &c, 1);
	c = '0' + d3;
	write(1, &c, 1);
	if (!last)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;
	int	last;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				last = (i == 7 && j == 8 && k == 9);
				print_digits(i, j, k, last);
				k++;
			}
			j++;
		}
		i++;
	}
}




