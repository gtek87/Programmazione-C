// somma numeri pari da 2 fino a 100

#include <stdio.h>

int main ( void )
{
    unsigned int somma = 0;
    unsigned int c = 2;
    
    for ( c , somma ; c <= 100; c +=2, somma += c  ) {

    }
    printf( "%u", somma );
}