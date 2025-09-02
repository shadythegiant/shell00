/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:02:31 by azahidi           #+#    #+#             */
/*   Updated: 2025/09/02 17:02:34 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *string)
{
	if (*string == '\0')
		return (0);
	return (1 + ft_strlen(string + 1));
}

char	*ft_strdup(char *src)
{
	int		str_len;
	char	*copy;
	char	*start;

	str_len = ft_strlen(src);
	copy = malloc(sizeof(char) * (str_len + 1));
	start = copy;
	if (!copy)
		return (NULL);
	while (*src)
	{
		*copy++ = *src++;
	}
	*copy = '\0';
	return (start);
}

// #include <unistd.h>

// int main(void) {
//     char *original = "Hello World";
//     char *duplicate = ft_strdup(original);

//     if (duplicate) {
//         while (*duplicate)
//             write(1, duplicate++, 1);
//         write(1, "\n", 1);
//     }

//     return (0);
// }
