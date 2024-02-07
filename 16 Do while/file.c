#include <stdio.h>

int main ( void )
{
    unsigned int counter = 1;

    do {

        printf( "%u ", counter ); // stampa counter = 1

    } while (++counter <= 10 ); // preincremento, verifica e da capo
}