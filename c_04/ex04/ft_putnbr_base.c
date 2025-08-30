/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:04:03 by azahidi           #+#    #+#             */
/*   Updated: 2025/08/30 19:04:06 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	isvalid(char *string, int size)
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
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	d[32];
	long	n;
	int		i;

	n = nbr;
	if (!isvalid(base, ft_strlen(base)))
		return ;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n == 0)
		return (ft_putchar(base[0]));
	i = 0;
	while (n)
	{
		d[i++] = base[n % ft_strlen(base)];
		n /= ft_strlen(base);
	}
	while (--i >= 0)
		ft_putchar(d[i]);
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
