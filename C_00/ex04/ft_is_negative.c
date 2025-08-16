#include <unistd.h>

void	ft_is_negative(int n)
{
	char	p;
	char	c;

	p = 'P';
	c = 'N';
	if (n > 0)
	{
		write(1, &p, 1);
	}
	if (n < 0)
	{
		write(1, &c, 1);
	}
}
