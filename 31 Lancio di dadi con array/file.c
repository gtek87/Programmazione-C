/*  Rappresentazione della distribuzione delle facce del dado 
    basata su simulazioni di lanci ripetuti. */
    
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7 // dimensione array
#define LANCI 60000000

int main (void)
{
    // array frequency inizializzato a 0
    unsigned int frequency[SIZE] = {0}; 

    srand(time(NULL)); //seme del generatore casuale

    //lancia il dado 60.000.000 di volte
    for (unsigned int roll = 1; roll <= LANCI; ++roll) {
        size_t face = 1 + rand() % 6;
        // assegna il valore uno all'array 1 anziché 0
        ++frequency[face]; 
    }

    printf("%s%17s\n", "Face", "Frequency");

    // stampa gli elementi di frequency 1 - 6 
    for (size_t face = 1; face < SIZE; ++face) {
        printf("%4d%17d\n", face, frequency[face]);
    }
}