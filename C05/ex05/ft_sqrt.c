/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 23:02:20 by azahidi           #+#    #+#             */
/*   Updated: 2025/09/03 23:02:22 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	index;
	long	number;

	number = nb;
	if (number == 0)
	{
		return (0);
	}
	if (number == 1)
	{
		return (1);
	}
	index = 2;
	while (number >= 2)
	{
		while (index * index <= number)
		{
			if (index * index == number)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}
