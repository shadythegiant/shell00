#include <unistd.h>

int	ft_strlen(char *string)
{
	char	*start;

	start = string;
	while (*string)
	{
		string++;
	}
	return (string - start);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	isValid(char *string, int size)
{
	int	counter;
	int	inner_counter;

	counter = 0;
	if (size <= 1)
		return (0);
	while (string[counter] != '\0')
	{
		inner_counter = counter + 1;
		while (string[inner_counter] != '\0')
		{
			if (string[counter] == string[inner_counter])
				return (0);
			inner_counter++;
		}
		if ((string[counter] >= 9 && string[counter] <= 13)
			|| string[counter] == 32)
			return (0);
		counter++;
	}
	retukrn (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	i;
	unsigned int	base_len;
	int				count;
	char			digits[32];
	long int		nbl;

	i = 0;
	nbl = nbr;
	base_len = ft_strlen(base);
	if (!isValid(base, base_len))
		return ;
	if (nbl < 0)
	{
		nbl = -nbl;
		ft_putchar('-');
	}
	if (nbl == 0)
	{
		ft_putchar(base[0]);
		return ;
	}
	while (nbl > 0)
	{
		digits[i] = base[nbl % base_len];
		nbl = nbl / base_len;
		i++;
	}
	count = i - 1;
	while (count >= 0)
	{
		ft_putchar(digits[count]);
		count--;
	}
}

// int main(void)
// {
//     write(1, "Base 10: ", 9);
//     ft_putnbr_base(42, "0123456789");
//     write(1, "\n", 1);

//     write(1, "Base 2: ", 8);
//     ft_putnbr_base(42, "01");
//     write(1, "\n", 1);

//     write(1, "Base 16 lowercase: ", 20);
//     ft_putnbr_base(255, "0123456789abcdef");
//     write(1, "\n", 1);

//     write(1, "Base 16 uppercase: ", 20);
//     ft_putnbr_base(255, "0123456789ABCDEF");
//     write(1, "\n", 1);

//     write(1, "Negative number in base 10: ", 28);
//     ft_putnbr_base(-1234, "0123456789");
//     write(1, "\n", 1);

//     return (0);
// }
