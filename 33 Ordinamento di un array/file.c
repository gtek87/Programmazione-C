/**********************************************************************************
    L'algoritmo di ordinamento a bolle funziona confrontando ripetutamente coppie
    di elementi adiacenti e scambiandoli se sono nell'ordine sbagliato. 
    Questo processo continua finché non sono più necessari scambi, indicando 
    che l'array è ordinato. Il programma stampa l'array iniziale, 
    esegue l'ordinamento a bolle e stampa l'array ordinato in modo crescente.
**********************************************************************************/

#include <stdio.h>
#define SIZE 10

int main (void)
{
    // inizializza a
    int a [SIZE] = {2,6,4,8,10,12,89,68,45,37};

    puts("Data items in original order" );

    // stampa l'array originario
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }
    for (unsigned int pass = 1; pass<SIZE; ++pass) {
        for (size_t i = 0; i < SIZE -1; ++i) {
            if ( a[i] > a[i +1]) { // i + 1 = posizione successiva
                int hold = a[i];
                a[i] = a [i + 1];
                a[i + 1] = hold;
            }
        }
    }
    puts("\nData items in ascending order");
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }
    puts(" ");
}