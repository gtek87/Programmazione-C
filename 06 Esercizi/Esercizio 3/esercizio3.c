/******************************************************************************** 
    Controllo del saldo in un conto.
    Il programma richiede all'utente di inserire il saldo iniziale, gli addebiti,
    gli accrediti e il limite, esegue il calcolo del nuovo saldo e poi informa 
    l'utente se il saldo supera il limite o meno.    
*********************************************************************************/


#include <stdio.h>

int main (void)
{
    printf( "%s", "Inserire saldo iniziale: ");
    int saldo;
    scanf ( "%d", &saldo );

    printf( "%s", "Inserire addebiti: " );
    int spese;
    scanf ( "%d", &spese );

    printf( "%s", "Inserire accrediti: " );
    int accrediti;
    scanf( "%d", &accrediti );

    printf( "%s", "Inserire limite: ");
    int limite;
    scanf( "%d", &limite );
    // calcolo
    saldo = saldo + accrediti - spese;
    // stampa limite e saldo 
    printf( "%s %d\n %s %d\n", "Limite: ", limite, "Saldo: ", saldo );
    //avvisa se il saldo super il limite
    
    if ( saldo>limite ) {
        printf( "%s", "Limite superato." );
    } 
    else {
        printf( "%s", "Limite non superato." );
    }
}