/*  Il programma utilizza un ciclo do-while con preincremento per stampare 
    i numeri da 1 a 10 sulla console, separati da spazi. Il ciclo viene 
    eseguito almeno una volta prima di verificare la condizione di continuazione */

    
#include <stdio.h>

int main ( void )
{
    unsigned int counter = 1;

    do {

        printf( "%u ", counter ); // stampa counter = 1

    } while (++counter <= 10 ); // preincremento, verifica e da capo
}