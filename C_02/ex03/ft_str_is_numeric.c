/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 21:57:55 by azahidi           #+#    #+#             */
/*   Updated: 2025/08/23 21:57:58 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isnumeric(char c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!isnumeric(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str[] = "1hello";
// 	char	str2[] = "1345";

// 	printf("%d\n", ft_str_is_numeric(str));
// 	printf("%d", ft_str_is_numeric(str2));
// }
