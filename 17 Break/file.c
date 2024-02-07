/* Ciclo for ed istruzione break */

   
#include <stdio.h>

int main ( void )
{
    unsigned int x;  

    //ripeti 10 volte
    for (x = 1; x <= 10; ++x) {
        if ( x == 5 ) {
            break;  // fa uscire dal ciclo for
        }
        printf("%u ", x );
    }
    printf("\nBroke out of loop at x = %u\n", x );
}