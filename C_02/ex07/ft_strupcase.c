/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 21:59:43 by azahidi           #+#    #+#             */
/*   Updated: 2025/08/23 21:59:45 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	turn_upper(char character)
{
	if (character >= 'a' && character <= 'z')
	{
		return (character - 32);
	}
	else
		return (character);
}

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		str[index] = turn_upper(str[index]);
		index++;
	}
	return (str);
}

// #include <stdio.h>

// int main() {

//     char string[] = "hello";

//     printf("%s", ft_strupcase(string));
//     return (0);

// }
