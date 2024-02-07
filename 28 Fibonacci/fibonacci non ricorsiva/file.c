#include <stdio.h>
#define MAX 93

//prototipo di funzione:
unsigned long long int fibonacci (unsigned int n);

int main (void)
{
    // calcola e stampa il valore di fibonacci
    // per numeri da 0 a MAX
    for (unsigned int loop = 0; loop <= MAX; ++loop) {
        printf("fibonacci (%u) = %llu\n", loop, fibonacci(loop));
    }
}

unsigned long long int fibonacci (unsigned int n)
{
    unsigned long long int fib1 = 0;
    unsigned long long int fib2 = 1;

    // ripeti per trovare l'ennesimo valore di Fibonacci
    for ( unsigned int j = 2; j <= n; ++j) {
        if (j % 2 == 0) {
           fib1 += fib2;
        }
        else {
            fib2 += fib1;
        }
    }
    // restituzione dell'ennesimo valore di Fibonacci
    if (n % 2 == 0) {
        return fib1;
    } else {
        return fib2;
    }
    
}