#include <stdlib.h>

int *ft_range(int min, int max)
{
	if (min >= max) {
		return NULL;
	}
	int size = max - min;
	int *range = malloc(sizeof(int) * size);
	if (range == NULL)	
	{
		return NULL;
	}
	int i = 0;
	while (i < size) {
		range[i] = min + i;
		i++;
	}
	return (range);
}

#include <stdio.h>

int main() {
	int min = 0;
	int max = 4;
	int size = max - min;
	int *ret = ft_range(min, max);
	int i = 0;
	while (i < size) {
		printf("%d\n", ret[i]);
		i++;
	}
}