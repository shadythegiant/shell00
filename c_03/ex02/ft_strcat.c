/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 15:16:36 by azahidi           #+#    #+#             */
/*   Updated: 2025/08/26 15:16:58 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// char *ft_strcat2(char *dest, char *src) {

//     int i = 0;
//     int j = 0;

//     while(dest[i]) i++;
//     while(src[j] ) {
//         dest[i++] = src[j++];
//     }

//     dest[i] = '\0';
//     return (dest);
// //  }
// int main() {

//     char dest[100] = "hello";
//     char *src = "world";

//     char *sum = ft_strcat(dest, src);
//     printf("%s", sum);

//     return (0);
// }
