/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 22:10:20 by azahidi           #+#    #+#             */
/*   Updated: 2025/08/23 22:10:23 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	checkalphanum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
	{
		return (1);
	}
	else
		return (0);
}

char	turn_upper(char character)
{
	if (character >= 'a' && character <= 'z')
	{
		return (character - 32);
	}
	else
		return (character);
}

char	turn_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	else
		return (c);
}

char	*ft_strcapitalize(char *str)
{
	int		counter;
	int		in_word;

	in_word = 0;
	counter = 0;
	while (str[counter])
	{
		if (in_word == 0 && checkalphanum(str[counter]))
		{
			in_word = 1;
			str[counter] = turn_upper(str[counter]);
		}
		else
			str[counter] = turn_lower(str[counter]);
		if (!checkalphanum(str[counter]))
			in_word = 0;
		counter++;
	}
	return (str);
}
