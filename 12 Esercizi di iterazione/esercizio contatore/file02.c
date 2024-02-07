#include <stdio.h>

int main ( void )
{
    unsigned int counter = 0; // di solito counter è uguale a 1

    while ( ++counter <= 10 ) { // incrementa prima della verifica

        printf( "%u\n", counter );
    }
}