/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 03:55:01 by azahidi           #+#    #+#             */
/*   Updated: 2025/08/31 03:55:04 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index <= 1)
	{
		return (1);
	}
	return (ft_fibonacci(index - 2) + ft_fibonacci(index + 1));
}
