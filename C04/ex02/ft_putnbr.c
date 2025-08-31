/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:53:30 by azahidi           #+#    #+#             */
/*   Updated: 2025/08/30 18:53:41 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;
	char	d[10];
	int		i;

	n = nb;
	i = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n == 0)
		return (ft_putchar('0'));
	while (n)
	{
		d[i++] = '0' + (n % 10);
		n /= 10;
	}
	while (--i >= 0)
		ft_putchar(d[i]);
}
