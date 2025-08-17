#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i <= size / 2)
	{
		temp = tab[i];
        int j =  size - 1 - i;
       
		tab[i] = tab[j];
		tab[j] = temp;
        i++; 
	}

  
}

int	main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d \n", size);

	ft_rev_int_tab(arr, size);

    int i = 0;
    while (i  < size ) {
        printf("%d\n", arr[i++]);
    }

	
}