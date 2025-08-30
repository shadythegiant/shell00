/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:03:17 by azahidi           #+#    #+#             */
/*   Updated: 2025/08/30 19:03:20 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_num(char c)
{
	return (c <= '9' && c >= '0');
}

int	ft_atoi(char *str)
{
	int		num;
	short	sign;

	num = 0;
	sign = 1;
	while (((*str >= 9 && *str <= 13) || *str == 32))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (is_num(*str))
	{
		num *= 10;
		num += *str - 48;
		str++;
	}
	return (num * sign);
}

// #include <stdio.h>

// int main(void)
// {
//     // Test cases
//     char *tests[] = {
//         "   ---+--+1234ab567",
//         "   -42",
//         "   +123",
//         "4193 with words",
//         "words and 987",
//         "   +0",
//         "   -0",
//         "0000123",
//         "+-12",
//         "--123",
//         "  \t\n\r\v\f123",
//         ""
//     };

//     int num_tests = sizeof(tests) / sizeof(tests[0]);

//     for (int i = 0; i < num_tests; i++) {
//         printf("Input: \"%s\" → Output: %d\n", tests[i], ft_atoi(tests[i]));
//     }

//     return (0);
// }
