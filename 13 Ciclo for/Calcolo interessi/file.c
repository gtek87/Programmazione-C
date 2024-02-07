/************************************************************ 
Una persona investe € 1000,00 in un conto corrente che frutta 
il 5% di interesse annuo. Supponendo che l'intero interesse 
resti depositato nel conto, calcolare e stampare la quantità 
di denaro nel conto alla fine di ogni anno per 10 anni. 
*************************************************************/

#include <stdio.h>
#include <math.h>

int main ( void ) {

    double amount, capital = 1000;
    double rate = 0.05;
    unsigned int n;

    // stampa intestasioni delle colonne 
    printf( "%4s", "Year" );
    printf( "%21s\n", "Amount on deposit" );

    for ( n = 1; n <= 10; n ++ ) {

        amount = capital * pow( 1.0+rate, n );
        printf ( "%4u%21.2f\n", n, amount );

    }
}