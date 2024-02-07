/*  Stampa i numeri da 1 a 10 sulla console, uno per riga, 
    utilizzando un ciclo while e incrementando il contatore counter */

#include <stdio.h>

int main ( void )
{
    // definizione ed assegnazione 
    unsigned int counter = 1; // contatore

    while ( counter <= 10 ) { // necessita il <= altrimenti stampa fino a 9
        
        printf( "%u\n", counter++ ); // prima stampa poi incrementa
    
    } // fine di while

}