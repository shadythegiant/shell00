#include <unistd.h>

// void ft_putchar(char c) {

//     write(1, &c , 1);

// }

void	print_digits(int d1, int d2, int d3, int last)
{
	char	c;

	c = '0' + d1;
	write(1, &c, 1);
	c = '0' + d2;
	write(1, &c, 1);
	c = '0' + d3;
	write(1, &c, 1);
	if (!last)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;
	int	last;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				last = (i == 7 && j == 8 && k == 9);
				print_digits(i, j, k, last);
				k++;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}

//  int checkAscending(int num) {

//     /// checking if a valid 3 dig

//     if (num < 100 || num > 999) {
//          return (0);
//     }

//     int hunderds = num  / 100;
//     int tens = (num % 100) / 10;
//     int units = num % 10;

//     if(hunderds <= tens && tens <= units) {
//         return (1);
//     } else {
//         return (0);
//     }

//     }

// int main()
// {
//     int i, j, k;
//     // for (i = 0; i <= 7; i++)
//     // {
//     //     for (j = i+1; j <= 8; j++)
//     //     {
//     //         for (k = j+1; k <= 9; k++)
//     //         {
//     //             printf("%d%d%d\n", i, j, k);
//     //         }
//     //     }
//     // }

//     i = 0;
//     while (i <=7) {
//         j = i + 1;

//         while (j <= 8 ) {
//             k = j + 1;

//             while (k <= 9) {

//                 printf("%d%d%d ", i , j , k);
//                 k++;

//             }

//             j++;

//         }
//         i++;
//     }
// }
