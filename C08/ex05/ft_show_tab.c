/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 17:21:54 by azahidi           #+#    #+#             */
/*   Updated: 2025/09/04 17:21:56 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *string)
{
	int	counter;

	counter = 0;
	while (string[counter])
	{
		ft_putchar(string[counter]);
		counter++;
	}
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

void	ft_show_tab(struct s_stock_str *par)
{
	int	counter;

	counter = 0;
	while (par[counter].str != 0)
	{
		ft_putstr(par[counter].str);
		ft_putchar('\n');
		ft_putnbr(par[counter].size);
		ft_putchar('\n');
		ft_putstr(par[counter].copy);
		ft_putchar('\n');
		counter++;
	}
}
