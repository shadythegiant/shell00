
// rush(5, 4)

// 0---0 == 
// printEdge(edgeC)
// if x >= 1
//     print(0)
//     i = 0;
//     while (i < x - 2)
//         print(-)
//     if (x >=2 )
//         print(0)




// |   |
// |   |
// 0-

#include <unistd.h>

int isEven_odd(char character)  {


    if (character % 2 == 0) return 1; 
    return 0; 

}

int main()
{
  char alphabet = 'z';
  while  (alphabet >= 'a' ) { 
    if (isEven_odd(alphabet)) { 

        write(1, &alphabet, 1); 

    } else {

        int alphaLowr = alphabet - 32; 
                write(1, &alphaLowr , 1); 

    }

   alphabet--;  
  }

  
}