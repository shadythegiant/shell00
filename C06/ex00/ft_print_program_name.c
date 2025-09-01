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

void	ft_putstr(char *string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		ft_putchar(string[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	char	*programm_name;

	if(argc == 1) { 
		programm_name = argv[argc - 1];
	   ft_putstr(programm_name);
	 ft_putchar('\n');
	}
	
	return (0);
}
