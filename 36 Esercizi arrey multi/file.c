/****************************************************************************
    Il programma dichiara una matrice bidimensionale table di dimensioni 3x3 
    utilizzando la costante SIZE. Successivamente, un doppio ciclo for viene 
    utilizzato per assegnare a ciascun elemento della matrice la somma dei 
    propri indici x e y. Infine, il programma stampa i risultati, ovvero gli
     indici e i valori corrispondenti in ogni elemento della matrice.
******************************************************************************/


#include <stdio.h>

#define SIZE 3

int main (void)
{
    int table [SIZE] [SIZE];
    // assegnare a ciascun elemento la somma dei propri indici

    for( size_t x = 0; x < SIZE; ++x) {
        for( size_t y = 0; y < SIZE; ++y) {
            table [x] [y] = x + y;
            // stampare i risultati
            printf("Table [%d] [%d] = %d\n", x, y, table [x] [y] );
        }
    }
}