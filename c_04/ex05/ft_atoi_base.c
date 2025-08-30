/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:14:24 by azahidi           #+#    #+#             */
/*   Updated: 2025/08/30 19:14:28 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *string)
{
	char	*start;

	start = string;
	while (*string)
		string++;
	return (string - start);
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

int	ft_atoi_base(char *str, char *base)
{
	int			counter;
	int			base_lenth;
	long int	num;
	short		sign;
	int			str_to_int;

	num = 0;
	sign = 1;
	base_lenth = ft_strlen(base);
	if (!is_valid_base(base, base_lenth))
		return (0);
	counter = skip_whitespace_and_sign(str, &sign);
	while (str[counter])
	{
		str_to_int = ft_strchr(base, str[counter]);
		if (str_to_int == -1)
			break ;
		num = (num * base_lenth) + str_to_int;
		counter++;
	}
	return (num * sign);
}
