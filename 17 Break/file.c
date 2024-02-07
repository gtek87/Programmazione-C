#include <stdio.h>

int main ( void )
{
    unsigned int x; // x utilizzabile anche fuori dal ciclo for

    //ripeti 10 volte
    for (x = 1; x <= 10; ++x) {
        if ( x == 5 ) {
            break;  // fa uscire dal ciclo for
        }
        printf("%u ", x );
    }
    printf("\nBroke out of loop at x = %u\n", x );
}