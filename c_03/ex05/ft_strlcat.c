/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 15:18:02 by azahidi           #+#    #+#             */
/*   Updated: 2025/08/26 15:18:07 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *string)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	j = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len <= size)
		return (size + src_len);
	while (src[j] && (dest_len + j) < size - 1)
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';
	return (dest_len + src_len);
}

// size -1 leave place for null terminator
// #include <stdio.h>
// int main(void)
// {
//     char buffer1[20] = "Hello";
//     char buffer2[10] = "Hi";
//     char buffer3[5] = "Hey";
//     char buffer4[15] = "";

//     unsigned int result1 = ft_strlcat(buffer1, " World", 20);
//     unsigned int result2 = ft_strlcat(buffer2, " there", 10);
//     unsigned int result3 = ft_strlcat(buffer3, " you", 5);
//     unsigned int result4 = ft_strlcat(buffer4, "Greetings", 15);

//     printf("Test 1: \"%s\" → Returned: %u\n", buffer1, result1);
//     printf("Test 2: \"%s\" → Returned: %u\n", buffer2, result2);
//     printf("Test 3: \"%s\" → Returned: %u\n", buffer3, result3);
//     printf("Test 4: \"%s\" → Returned: %u\n", buffer4, result4);

//     return (0);
// }
