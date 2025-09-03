/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 18:41:38 by azahidi           #+#    #+#             */
/*   Updated: 2025/09/03 18:41:40 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *string)
{
	int	counter;

	counter = 0;
	while (string[counter])
	{
		counter++;
	}
	return (counter);
}

int	is_valid_base(char *str_base, int size)
{
	int	counter;
	int	checker;

	counter = 0;
	if (size <= 1)
		return (0);
	while (str_base[counter] != '\0')
	{
		if ((str_base[counter] >= 9 && str_base[counter] <= 13)
			|| str_base[counter] == 32)
			return (0);
		if (str_base[counter] == '+' || str_base[counter] == '-')
			return (0);
		checker = counter + 1;
		while (str_base[checker])
		{
			if (str_base[counter] == str_base[checker])
			{
				return (0);
			}
			checker++;
		}
		counter++;
	}
	return (1);
}

int	ft_strchr(char *str, char c)
{
	char	*start;

	start = str;
	while (*str)
	{
		if (*str == c)
		{
			return (str - start);
		}
		str++;
	}
	return (-1);
}

int	skip_whitespace_and_sign(char *str, short *sign)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*sign *= -1;
		i++;
	}
	return (i);
}

char	*ft_revtab(int size, char *string)
{
	int		counter;
	char	*return_string;

	return_string = malloc(sizeof(char) * size + 1);
	if (!return_string)
		return (NULL);
	if (size <= 1)
	{
		return_string[0] = string[0];
		return_string[1] = '\0';
		return (return_string);
	}
	counter = 0;
	while (counter < size)
	{
		return_string[counter] = string[size - 1 - counter];
		counter++;
	}
	return_string[counter] = '\0';
	return (return_string);
}
