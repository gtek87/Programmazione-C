/* Scrivere un programma che chieda all'utente due numeri 
   e ne stampi: somma, prodotto, differenza, quoziente e resto */

#include <stdio.h>

int main (void)
{
    int x, y;
    printf( "Inserire due numeri:\n" );
    scanf( "%d%d", &x, &y );
    printf( "La somma di %d e %d corrisponde a %d\n", x, y, x + y);
    printf( "Il prodotto di %d e %d corrisponde a %d\n", x , y, x * y);
    printf( "La differenza di %d e %d corrisponde a %d\n", x, y, x - y);
    printf( "Il quozionete di %d e %d corrisponde a %d", x, y, x / y);
    printf( " con resto di %d\n", x % y);
    printf( " \n");
}