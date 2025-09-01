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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_params(int argc, char *argv[])
{
	char	*temp;
	int		counter;

	counter = 1;
	while (counter < argc - 1)
	{
		if (ft_strcmp(argv[counter], argv[counter + 1]) > 0)
		{
			temp = argv[counter];
			argv[counter] = argv[counter + 1];
			argv[counter + 1] = temp;
			counter = 0;
		}
		counter++;
	}
}

int	main(int argc, char *argv[])
{
	int	counter;

	counter = 1;
	ft_sort_params(argc, argv);
	while (counter < argc)
	{
		ft_putstr(argv[counter]);
		counter++;
	}
	return (0);
}
