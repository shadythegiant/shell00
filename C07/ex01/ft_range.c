/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:04:38 by azahidi           #+#    #+#             */
/*   Updated: 2025/09/03 12:04:40 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*range;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	range = malloc(sizeof(int) * size);
	if (range == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	size;
// 	int	*ret;
// 	int	i;

// 	min = 0;
// 	max = 4;
// 	size = max - min + 1;
// 	ret = ft_range(min, max);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d\n", ret[i]);
// 		i++;
// 	}
// }
