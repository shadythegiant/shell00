/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-sah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 18:39:38 by yait-sah          #+#    #+#             */
/*   Updated: 2025/08/16 18:51:24 by yait-sah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c);

void    rush(int x, int y)
{
    int    j;
    int    i;

    if (x <= 0 || y <= 0)
        return ;
    j = 1; //rows 
    while (j <= y)
    {
        i = 1;
        while (i <= x)
        {
            if ((i == 1 && j == 1) || (i == x && j == 1)
                || (j == y && i == 1) || (j == y && i == x))
                ft_putchar('o');
            else if ((i > 1 && i < x) && (j == 1 || j == y))
                ft_putchar('-');
            else if ((j > 1 && j < y) && (i == 1 || i == x))
                ft_putchar('|');
            else
                ft_putchar(' ');
            i++;
        }
        ft_putchar('\n');
        j++;
    }
}