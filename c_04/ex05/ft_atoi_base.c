#include <stdio.h>
#include <unistd.h>

int	is_Numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_strlen(char *string)
{
	char	*start;

	start = string;
	while (*string)
		string++;
	return (string - start);
}

int	is_valid_base(char *str_base, int size)
{
	int	counter;

 	counter = 0;
	if (size <= 1)
		return (0);
	while (str_base[counter] != '\0')
	{
		if ((str_base[counter] >= 9 && str_base[counter] <= 13) || str_base[counter] == 32)
			return (0);
		if (str_base[counter] == '+' || str_base[counter] == '-')
			return (0);
		counter++;
	}
	return (1);
}

int ft_strchr(char *str, char c) {
	char *start = str;
	while (*str) {
		if (*str == c) {
			return str - start;
		}
		str++;
	}
	return -1;
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	counter;
	unsigned int	base_lenth;
	long int		num;
	short			sign;

	num = 0;
	sign = 1;
	base_lenth = ft_strlen(base);
	counter = 0;
	if (!is_valid_base(base, base_lenth))
		return (0);
	while ((str[counter] >= 9 && str[counter] <= 13) || str[counter] == 32)
		counter++;
	while (str[counter] == '+' || str[counter] == '-')
	{
		if (str[counter] == '-')
			sign *= -1;
		counter++;
	}
	//num = counter;
	while (str[counter])
	{
		int str_to_int = ft_strchr(base, str[counter]);
		if (str_to_int == -1)
			break;
		// num = base[num % base_lenth];
		// num = num / base_lenth;
		// base = "0123456789abcdef"
		num = (num * base_lenth) + str_to_int;
		counter++;
	}
	return (num * sign);
}

int	main(void)
{
	printf("Octel 42: %d\n", ft_atoi_base("34", "01234567"));

	// Decimal
	// printf("Decimal 42: %d\n", ft_atoi_base("42", "0123456789"));
	// // Decimal with whitespace
	// printf("Decimal with spaces: %d\n", ft_atoi_base("   123", "0123456789"));
	// // Decimal with control char (tab)
	// printf("Decimal with tab: %d\n", ft_atoi_base("\t456", "0123456789"));
	// // Negative number
	// printf("Negative: %d\n", ft_atoi_base("-789", "0123456789"));
	// // Binary
	// printf("Binary 101010: %d\n", ft_atoi_base("101010", "01"));
	// // Hex lowercase
	// printf("Hex 'ff': %d\n", ft_atoi_base("ff", "0123456789abcdef"));
	// // Base 5
	// printf("Base 5 '243': %d\n", ft_atoi_base("243", "01234"));
	// // Invalid base characters
	// printf("Invalid char: %d\n", ft_atoi_base("123Z", "0123456789"));
	return (0);
}
