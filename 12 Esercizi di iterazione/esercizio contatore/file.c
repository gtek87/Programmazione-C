// iterazione controllata da contatore
#include <stdio.h>

int main ( void )
{
    // definizione ed assegnazione 
    unsigned int counter = 1; // contatore

    while ( counter <= 10 ) { // necessita il <= altrimenti stampa fino a 9
        
        printf( "%u\n", counter++ ); // prima stampa poi incrementa
    
    } // fine di while

}