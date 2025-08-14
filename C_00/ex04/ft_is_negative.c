#include <unistd.h>

void	ft_is_negative(int n)
{
	char	p;
	char	n;

	p = 'P';
	n = 'N';
	if (n > 0)
	{
		write(1, &p, 1);
	}
	if (n < 0)
	{
		write(1, &n, 1);
	}
}

int	main(void)
{
	ft_is_negative(-1);
	return (0);
}
