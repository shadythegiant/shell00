#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int size;
	int *range; 
	int i;

	if (min == max)
	{
		range = malloc(sizeof(int)); 
		if(!range) return NULL; 
		range[0] = min; 
		return(range); 
	}

	if (min > max)
	{
		size = (min - max) + 1;
	}
	else if (max > min)
	{
		size = (max - min) + 1;
	}

	 range = malloc(sizeof(int) * size);
	if (range == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		if(min < max) { 
			range[i] = min + i; 
		} else { 
			range[i] = min - i; 
 		}
		i++; 
	}
	return (range);
}
#include <stdio.h>

int main() { 
	int min = 10; 
	int max = 0; 
	int size = (min > max) ? (min - max + 1) : (max - min + 1); 

	int *range = ft_range(min , max); 
	for(int i = 0; i < size;  i ++) { 

		printf("%d\n", range[i]); 
	}

	return 0; 
}