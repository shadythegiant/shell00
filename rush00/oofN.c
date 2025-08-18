#include <unistd.h>



void ft_putchar(char character) { 
    write(1, &character, 1); 
}


void printCornerEdge(int width ) {
    
    if (width >= 1) { 
        ft_putchar('o'); 
    }

   int i = 0; 

   while ( i < width - 2) { 

    ft_putchar('-'); 
    i++; 
   }

   if (width >= 2) ft_putchar('o'); 
   ft_putchar('\n'); 

}


void printVertical(int width) { 

    if (width < 0) return; 


    ft_putchar('|'); 
   

    int i = 0; 

    while (i < width -2) { 
        ft_putchar(' ');
        i++; 
    }

    ft_putchar('|'); 
    ft_putchar('\n'); 
}



void rush(int width, int height) { 
    if (width == 0 && height == 0) return; 
    printCornerEdge(width); 

    int rows = 0; 


    while (rows < height - 2) { 
        printVertical(width); 
        rows++; 
    }

    if(height > 1) printCornerEdge(width); 
}

int main() { 

    rush(2,5); 
    rush(1,1);
    
    return 0; 
}