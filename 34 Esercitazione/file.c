#include <stdio.h>
#define SIZE 10 

int main (void)
{
    double fractions [SIZE] = { 0.0 }; // inizializza a 0 tutti gli elementi
    fractions[9] = 1.667; // assegna il valore all'elemento 9
    // stampa a video gli elementi 6 e 9
    printf("Element 6 = %.2f\nElement 9 = %.2f\n", fractions[6], fractions[9]);

    for(size_t x = 1; x <= SIZE; ++x) {
        printf("Element %d = %.2f\n", x, fractions[x]);
    }
}