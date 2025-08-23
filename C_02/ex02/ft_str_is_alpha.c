/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 21:57:15 by azahidi           #+#    #+#             */
/*   Updated: 2025/08/23 21:57:19 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!is_alpha(str[i++]))
		{
			return (0);
		}
	}
	return (1);
}

// int main() {
//     char str[] = "hEllo";
//     char str2[] = "he3362";

//     printf("%d" , ft_str_is_alpha(str));
//     printf("%d", ft_str_is_alpha(str2));
// }
