/************************************************************ 

Una persona investe € 1000,00 in un conto corrente che frutta 
il 5% di interesse annuo. Supponendo che l'intero interesse 
resti depositato nel conto, calcolare e stampare la quantità 
di denaro nel conto alla fine di ogni anno per 10 anni. 

*************************************************************/

#include <stdio.h>

int main ( void )
{
    float deposit = 1000.00;
    unsigned int y = 1;

    for ( y , deposit; y <= 10; y++, deposit += 50 ) {

        printf( "%.2f €\n", deposit );
    } 
}

