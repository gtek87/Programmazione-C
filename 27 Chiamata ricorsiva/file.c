#include <stdio.h>
unsigned long long int factorial (unsigned int number);

int main (void)
{
    for (unsigned int i=0; i <= 21; ++i) {
        printf("%u! = %llu\n", i, factorial (i));
    }
}

unsigned long long int factorial (unsigned int number)
{
    if (number <= 1 ) { // caso di base
        return 1;
    }
    else { // passo ricorsivo
        return (number * factorial(number - 1));
    }
}