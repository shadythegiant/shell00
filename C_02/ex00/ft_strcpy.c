/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 21:55:40 by azahidi           #+#    #+#             */
/*   Updated: 2025/08/23 21:55:45 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*p;

	p = dest;
	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}

// int main() {

//     char *string = "hello";
//     char string2[10];

// ft_strcpy(string2, string);

//    printf("%s \n", string);
//    printf("%s \n", string2);
// }

//  char *ft_strcpy(char *dest, char *src) {
//     int i;

//     i  = 0;

//     while (src[i] != '\0') {
//         dest[i] = src[i];
//         i++;
//     }
//     dest[i] = '\0';
//     return (dest);
//  }
