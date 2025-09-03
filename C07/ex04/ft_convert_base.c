#include <stdlib.h>
#include <unistd.h>
int	skip_whitespace_and_sign(char *str, short *sign); 
int	ft_strchr(char *str, char c); 
int	is_valid_base(char *str_base, int size); 
int ft_strlen(char *string); 
char *ft_revtab(int size, char *string); 


void ft_putchar(char c) { 
	write(1, &c, 1); 
}


int	ft_atoi_base(char *str, char *base)
{
	int			counter;
	int			base_lenth;
	long int	num;
	short		sign;
	int			str_to_int;

	num = 0;
	sign = 1;
	base_lenth = ft_strlen(base);
	
	counter = skip_whitespace_and_sign(str, &sign);
	while (str[counter])
	{
		str_to_int = ft_strchr(base, str[counter]);
		if (str_to_int == -1)
			break ;
		num = (num * base_lenth) + str_to_int;
		counter++;
	}
	return (num * sign);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	char	d[100];
	long	n;
	int		i;
	char *final_num; 

	n = nbr;
	if (n == 0) {
		d[0] = base[0]; 
		final_num = ft_revtab(1, d); 
		return final_num; 
	}
	
	if (n < 0)
	{
		n = -n;
	}
		
	i = 0;
	while (n)
	{ 
		
		d[i++] = base[n % ft_strlen(base)];
		n /= ft_strlen(base);
	}
	d[i] = '\0'; 
	 final_num = ft_revtab(i, d); 
	return final_num; 
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to) { 
	int decimal; 
	char *c; 

	int base_from_len = ft_strlen(base_from); 
	int base_to_len = ft_strlen(base_to); 

	if(!is_valid_base(base_from, base_from_len) || !is_valid_base(base_to, base_to_len)) return NULL; 
	
	decimal = ft_atoi_base(nbr, base_from); 
	c = ft_putnbr_base(decimal, base_to); 
	return c; 
}

#include <stdio.h>



int main(void) {
    char *result;

    // Empty input
    result = ft_convert_base("", "0123456789", "01");
    printf("Input: '' | From: '0123456789' | To: '01' => %s\n", result ? result : "Conversion failed");
    free(result);

    // Invalid base_from (duplicate)
    result = ft_convert_base("123", "1123456789", "01");
    printf("Input: '123' | From: '1123456789' | To: '01' => %s\n", result ? result : "Conversion failed");
    free(result);

    // Invalid base_to (invalid char)
    result = ft_convert_base("123", "0123456789", "01+");
    printf("Input: '123' | From: '0123456789' | To: '01+' => %s\n", result ? result : "Conversion failed");
    free(result);

    // Invalid base_from (too short)
    result = ft_convert_base("123", "0", "01");
    printf("Input: '123' | From: '0' | To: '01' => %s\n", result ? result : "Conversion failed");
    free(result);

    // Negative number
    result = ft_convert_base("-42", "0123456789", "0123456789ABCDEF");
    printf("Input: '-42' | From: '0123456789' | To: '0123456789ABCDEF' => %s\n", result ? result : "Conversion failed");
    free(result);

    // Multiple signs
    result = ft_convert_base("--+--42", "0123456789", "01");
    printf("Input: '--+--42' | From: '0123456789' | To: '01' => %s\n", result ? result : "Conversion failed");
    free(result);

    // Leading whitespace
    result = ft_convert_base("   \t\n42", "0123456789", "01");
    printf("Input: '   \\t\\n42' | From: '0123456789' | To: '01' => %s\n", result ? result : "Conversion failed");
    free(result);

    // Invalid character in input
    result = ft_convert_base("42Z", "0123456789", "01");
    printf("Input: '42Z' | From: '0123456789' | To: '01' => %s\n", result ? result : "Conversion failed");
    free(result);

    // Zero input
    result = ft_convert_base("0", "0123456789", "01");
    printf("Input: '0' | From: '0123456789' | To: '01' => %s\n", result ? result : "Conversion failed");
    free(result);

    // Max int
    result = ft_convert_base("2147483647", "0123456789", "0123456789ABCDEF");
    printf("Input: '2147483647' | From: '0123456789' | To: '0123456789ABCDEF' => %s\n", result ? result : "Conversion failed");
    free(result);

    // Min int
    result = ft_convert_base("-2147483648", "0123456789", "0123456789ABCDEF");
    printf("Input: '-2147483648' | From: '0123456789' | To: '0123456789ABCDEF' => %s\n", result ? result : "Conversion failed");
    free(result);

    // Hex to binary
    result = ft_convert_base("FF", "0123456789ABCDEF", "01");
    printf("Input: 'FF' | From: '0123456789ABCDEF' | To: '01' => %s\n", result ? result : "Conversion failed");
    free(result);

    // Octal to decimal
    result = ft_convert_base("377", "01234567", "0123456789");
    printf("Input: '377' | From: '01234567' | To: '0123456789' => %s\n", result ? result : "Conversion failed");
    free(result);

    // Base 36 to decimal
    result = ft_convert_base("Z", "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ", "0123456789");
    printf("Input: 'Z' | From: '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ' | To: '0123456789' => %s\n", result ? result : "Conversion failed");
    free(result);

    return 0;
}
