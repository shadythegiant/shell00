/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 23:45:01 by azahidi           #+#    #+#             */
/*   Updated: 2025/09/03 23:45:04 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	power_result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	power_result = 1;
	while (power > 0)
	{
		power_result *= nb;
		power--;
	}
	return (power_result);
}
