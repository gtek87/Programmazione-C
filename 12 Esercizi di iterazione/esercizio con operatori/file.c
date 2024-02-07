/*  Acquisire il valore della variabile intera senza segno x
    e scrivere il valore della variabile senza segno x decrementato di 1 */

#include <stdio.h>

int main ( void )
{
    unsigned int x;
    printf( "%s", "Insert x value: " );
    scanf( "%u", &x );
    printf( "%u decresede of one is %u\n", x, x - 1 ); // da sinistra a destra
}