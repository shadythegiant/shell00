#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void rush(int x, int y) { 
   int rows = 0; 
   while (rows < y) { 
    int columns = 0; 

    while (columns < x) { 
     // corners conditionsals 
     
     if ((rows == 0 && columns == 0) ||( rows == 0 && columns == x - 1) || (rows == y - 1 && columns == x - 1) || (rows == y - 1 && columns ==0))  {
        ft_putchar('o'); 
     } 

     //  inside row and bottow row 

    else  if ((rows == 0 && columns > 0 && columns < x - 1) || ( rows == y - 1 && columns > 0 && columns < x - 1) ) {
        ft_putchar('-'); 
     }

     // inside space 

     else if (rows > 0 && rows < y - 1 && columns > 0 && columns < x - 1) { 
        ft_putchar(' '); 
     } 

     //  for height line | 

    else  if ((columns == 0 || columns == x - 1) && (rows > 0 && rows < y - 1)) { 
        ft_putchar('|');
     } 

     columns++; 

    }

    ft_putchar('\n'); 
    rows++; 
   }
}


int main() { 
    rush(1,1); 
    return 0; 
}