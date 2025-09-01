/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:09:24 by azahidi           #+#    #+#             */
/*   Updated: 2025/09/01 16:09:26 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	counter;
	int	inner_counter;

	counter = 1;
	if (argc > 1)
	{
		while (argv[counter])
		{
			inner_counter = 0;
			while (argv[counter][inner_counter])
			{
				ft_putchar(argv[counter][inner_counter]);
				inner_counter++;
			}
			ft_putchar('\n');
			counter++;
		}
	}
	return (0);
}
