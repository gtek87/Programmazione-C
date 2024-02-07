// Scrivere un programma che chieda all'utente due numeri 
// e ne stampi: somma, prodotto, differenza, quoziente e resto


#include <stdio.h>

int main (void)
{
    int x, y; // definizione dei due numeri

    printf( "Enter two numbers:\n");
    scanf( "%d%d", &x, &y );

    printf( "The sum is %d\n", x + y );
    printf( "The product is %d\n", x * y );
    printf( "The difference is %d\n", x - y );
    printf( "The quotient is %d\n", x / y );
    printf( "The remainder is %d\n", x % y );
}