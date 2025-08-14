#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;

	if (*b != 0)
	{
		division = *a / *b;
		*b = *a % *b;
		*a = division;
	}
}
