#include <stdio.h>
#define SIZE 5 // dimensione dell'array

int main (void)
{
    //la costante SIZE specifica la dimensione dell'array
    int s[SIZE]; // l'array ha un numero SIZE di elementi

    for(size_t j = 0; j < SIZE; j++) {
        s[j] = 2 + 2 * j;
    }

    printf("%s%13s\n", "Element", "Value");

    // invia in uscita i contenuti dell'array
    for (size_t j = 0; j < SIZE; j++) {
        printf("%7u%13d\n", j, s[j]);
    }
}
