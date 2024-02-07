// Sommare i numeri interi dispari tra 1 e 99 usando un'istruzione do...while

#include <stdio.h>

int main ( void )
{
    unsigned int counter = 1;
    unsigned int sum = 0;

    do {
        if ( counter % 2 != 0 ) { // se il resto è diverso da zero
            sum += counter; // somma il numero dispari
        } // fine if
        counter++;  // incrementa il contatore
    } while ( counter <= 99 ); // condizione do...while

    printf( "Sum = %u\n", sum );
}