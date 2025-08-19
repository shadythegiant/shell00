/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahidi <azahidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 21:28:12 by azahidi           #+#    #+#             */
/*   Updated: 2025/08/19 21:28:14 by azahidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		j = size - 1 - i;
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
	}
}

// int	main(void)
// {
// 	int	arr[] = {1, 2, 3, 4, 5};
// 	int	size;
// 	int	i;

// 	size = sizeof(arr) / sizeof(arr[0]);
// 	printf("%d \n", size);
// 	ft_rev_int_tab(arr, size);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d\n", arr[i++]);
// 	}
