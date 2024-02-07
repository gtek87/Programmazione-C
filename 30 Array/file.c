/* Inizializza un array di 5 interi con valori zero e successivamente 
stampa una tabella che mostra gli indici e i valori di ciascun elemento dell'array */

#include <stdio.h>

int main (void)
{
    int n [5]; // n è una array di 5 interi
    // imposta gli elementi dell'array n a 0
    for (size_t i = 0; i < 5; ++i) {
        n[i] = 0;
        // imposta 0 l'elemento alla locazione i
    }

    printf( "%s%13s\n", "Element", "Value" );
    // invia in uscita i contenuti dell'array n
    for (size_t i = 0; i < 5; ++i) {
        printf("%7u%13d\n", i, n[i] );
    }
}