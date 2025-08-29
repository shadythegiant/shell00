#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1); 
}

void ft_putnbr(int nb) {

    long int nbl; 
    int i; 

    nbl = nb; 
    

   

    if(nbl < 0) {
        nbl = -nbl; 
        ft_putchar('-'); 
    }

    if(nbl == 0) {
        ft_putchar('0'); 
        return; 
    }

     if (nbl <=  9) { 
        char units = nbl + '0'; 
        ft_putchar(units); 
        return; 
    }

    char digits[20]; 
    long int temp; 
    int count; 
    temp = nbl; 
    count = 0; 

    while (temp > 0) {
        digits[count] = '0' + temp % 10; 
        temp = temp / 10; 
        count++; 
    }

    i = count - 1; 

    while (i >= 0) {

       ft_putchar(digits[i]); 
       i--; 
    }

}


#include <stdio.h>



// int main(void)
// {
//     // Edge cases
//     ft_putnbr(0);       
//     ft_putchar('\n');

//     ft_putnbr(-1);          
//     ft_putchar('\n');

//     ft_putnbr(9);         
//     ft_putchar('\n');

//     ft_putnbr(-2147483648); // INT_MIN on 32-bit systems
//     ft_putchar('\n');

//     ft_putnbr(2147483647);  // INT_MAX
//     ft_putchar('\n');

//     // Typical values
//     ft_putnbr(42);        // Should print: 42
//     ft_putchar('\n');

//     ft_putnbr(-12345);    // Should print: -12345
//     ft_putchar('\n');

//     return 0;
// }
