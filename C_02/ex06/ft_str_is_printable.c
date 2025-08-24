/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 21:59:13 by azahidi           #+#    #+#             */
/*   Updated: 2025/08/23 21:59:15 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_printable(char character)
{
	if (character >= 32 && character <= 126)
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	if (str[index] == '\0')
		return (1);
	while (str[index] != '\0')
	{
		if (!is_printable(str[index]))
			return (0);
		index++;
	}
	return (1);
}
