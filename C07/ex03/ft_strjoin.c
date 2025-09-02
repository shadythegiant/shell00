#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char *ft_strjoin(int size, char **strs, char *sep){
	int total_size = 0;
	int i = 0;
	while (i < size) {
		total_size += ft_strlen(strs[i]);
		i++;
	}
	total_size += ft_strlen(sep) * (size - 1);
	char *result = malloc(sizeof(char) * (total_size + 1));
	if (result == NULL)
		return NULL;

	i = 0;
	int result_index = 0;
	while(i < size) {
		char *str = strs[i];
		int j = 0;
		while (str[j]) {
			result[result_index++] = str[j++];
		}
		j = 0;
		while (i < size - 1 && sep[j]) {
			result[result_index++] = sep[j++];
		}
		i++;
	}

	result[result_index] = '\0';

	return result;
}

#include <stdio.h>
int main() {
	char *strs[] = {"hello", "world", "my", "name", NULL};
	char *join = ft_strjoin(4, strs, " ___ ");
	printf("%s\n", join);
}