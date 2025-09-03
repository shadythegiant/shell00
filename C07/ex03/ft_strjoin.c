/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 18:37:08 by azahidi           #+#    #+#             */
/*   Updated: 2025/09/03 18:37:10 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_concat(int size, char **strs, char *result, char *sep)
{
	int		counter;
	int		result_index;
	char	*str;
	int		j;

	counter = 0;
	result_index = 0;
	while (counter < size)
	{
		str = strs[counter];
		j = 0;
		while (str[j])
		{
			result[result_index++] = str[j++];
		}
		j = 0;
		while (counter < size - 1 && sep[j])
		{
			result[result_index++] = sep[j++];
		}
		counter++;
	}
	result[result_index] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_size;
	int		i;
	char	*result;

	if (size == 0)
	{
		result = malloc(sizeof(char) * 1);
		result[0] = '\0';
		return (result);
	}
	total_size = 0;
	i = 0;
	while (i < size)
	{
		total_size += ft_strlen(strs[i]);
		i++;
	}
	total_size += ft_strlen(sep) * (size - 1);
	result = malloc(sizeof(char) * (total_size + 1));
	if (result == NULL)
		return (NULL);
	result = ft_concat(size, strs, result, sep);
	return (result);
}

// #include <stdio.h>
// int main() {
// 	char *strs[] = {"hello", "world", "my", "name", NULL};
// 	char *empty2[] = {"ss ","ss "};
// 	char *join = ft_strjoin(4, strs, " ___ ");
// 	char *empty = ft_strjoin(0, empty2, "");
// 	printf("%s\n", join);
// 	printf("%s\n", empty);
// }
