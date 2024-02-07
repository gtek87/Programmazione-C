#include <stdio.h>

// prototipo di funzione
int square (int y);

int main (void)
{
    for(int x = 1; x <= 10; ++x) {
        printf("%d ",square(x)); // chiamata di funzione
    }
    puts(" ");
}

// definizione di funzione
int square (int y)
{
    return y * y;
}