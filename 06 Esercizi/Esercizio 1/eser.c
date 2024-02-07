/*** Stampare i numeri da 1 a 4 sulla console, separati da uno spazio. ***/

#include <stdio.h>

int main (void)
{
    int n = 1;

    while ( n < 5 ) {
        printf( "%d ", n++);
    }
}