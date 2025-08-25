/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 21:56:16 by azahidi           #+#    #+#             */
/*   Updated: 2025/08/23 21:56:18 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*src && i < n)
	{
		dest[i] = *src++;
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// char *ft_strncpy(char *dest, char *src, unsigned int n) {
//     unsigned int i = 0;

//     while (src[i] != '\0' && i < n) {

//         dest[i] = src[i];
//         i++;

//     }

//    if (i < n ) {
//     dest[i] = '\0';
//     i++;
//    }
//    return (dest);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "hello";
// 	char	str2[100];

// 	;
// 	printf("%s", ft_strncpy(str2, str, 100));
// }
