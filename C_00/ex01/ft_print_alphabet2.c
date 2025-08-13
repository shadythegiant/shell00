/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Azahidi  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 19:24:56 by Azahidi           #+#    #+#             */
/*   Updated: 2025/09/13 19:24:56 by Azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>



void ft_putchar(char c ) { 
    write(1, &c, 1); 
}


void ft_print_alphabet(void) {
   int i; 
   i = 'a'; 
   while (i <= 'z') { 
    ft_putchar(i); 
    i++; 
   }
   
}

int main(void) { 
    ft_print_alphabet(); 
    return 0; 
}