#include <unistd.h>

void ft_is_negative(int n) { 
    char P = 'P'; 
    char N = 'N'; 


    if (n > 0 ) { 
        write(1, &P, 1); 
    }


    if (n <  0 ) {
        write(1, &N, 1); 
    }
}

int main() { 
    ft_is_negative(-1); 
    return 0; 
}