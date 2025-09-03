#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i; 

	if (min >= max) {
		*range = NULL;
		return 0;
	}
	 size = max - min;
	*range = malloc(sizeof(int) * size);
	if (*range == NULL)
		return -1;
	 i = 0;
	while (i < size) {
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

// #include <stdio.h>

// int main() {
// 	int min = 0;
// 	int max = 4;
// 	int *range;
// 	int size = ft_ultimate_range(&range, min, max);
// 	int i = 0;
// 	while (i < size) {
// 		printf("%d\n", range[i]);
// 		i++;
// 	}
// }