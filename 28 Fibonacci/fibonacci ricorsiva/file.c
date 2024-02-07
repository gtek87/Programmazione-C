#include <stdio.h>
// prototipo di funzione:
unsigned long long int fibonacci (unsigned int n);

int main (void)
{
    unsigned int number; // numero inserito da utente
    // ottieni un intero da untente
    printf("%s", "Enter an ineger: ");
    scanf("%u", &number );
    // calcola il valore di fibonacci
    unsigned long long int result = fibonacci (number);
    // stampa il risultato
    printf("Fibonacci (%u) = %llu\n", number, result );
}
// definizione ricorsiva della funzione fibonacci
unsigned long long int fibonacci (unsigned int n)
{
    // caso base
    if (0 == n || 1 == n ) {
        return n;
    }
    else { // passo ricorsivo
       return fibonacci (n - 1) + fibonacci (n - 2);
    }
}