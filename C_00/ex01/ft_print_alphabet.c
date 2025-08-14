/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Azahidi  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 19:24:56 by Azahidi           #+#    #+#             */
/*   Updated: 2025/09/13 19:24:56 by Azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	ascii_order;

	ascii_order = 97;
	while (ascii_order <= 122)
	{
		write(1, &ascii_order, 1);
		ascii_order++;
	}
}
