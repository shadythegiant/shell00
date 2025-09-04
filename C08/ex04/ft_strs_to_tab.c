/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 17:21:26 by azahidi           #+#    #+#             */
/*   Updated: 2025/09/04 17:21:29 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *string)
{
	int	len;

	len = 0;
	while (string[len])
	{
		len++;
	}
	return (len);
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			counter;
	t_stock_str	*results;
	int			str_len;
	char		*copy;
	char		*string;

	counter = 0;
	results = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!results)
		return (NULL);
	while (counter < ac)
	{
		string = av[counter];
		copy = ft_strdup(string);
		if (!copy)
			return (NULL);
		str_len = ft_strlen(string);
		results[counter].size = str_len;
		results[counter].str = string;
		results[counter].copy = copy;
		counter++;
	}
	results[counter].str = 0;
	return (results);
}
