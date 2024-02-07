// Realizzare un programma che effettui la somma di numeri inseriti dall'utente
// Ogni volta indicare se il totale è pari o dispari
// Prevedere un valore sentinella per concludere l'esecuzione

#include <stdio.h>

int main ( void )
{
    // inizializza le variabili nelle definizioni
    unsigned int num = 1; // num = 1 permette di entrare nel cilco while
    unsigned int tot = 0; 

    while ( num != 0 ) {  // 0 variabile sentinella

        printf( "%s", "Insert number (0 to end) : ");
        scanf( "%u", &num );
        tot += num;
        printf( "Tot = %u", tot );

        if ( tot % 2 == 0 ) {
            puts ( " - Pari" );
        }
        else {
            puts ( " - Dispari" );
        }
    }

}