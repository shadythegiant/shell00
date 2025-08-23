/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 22:00:05 by azahidi           #+#    #+#             */
/*   Updated: 2025/08/23 22:00:07 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	turn_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	else
		return (c);
}

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		str[index] = turn_lower(str[index]);
		index++;
	}
	return (str);
}

// #include <stdio.h>

// int main() {

//     char string[] = "HELLO";

//     printf("%s", ft_strlowcase(string));
//     return (0);

// }
