#include <stdio.h>

int main ( void )
{
    unsigned int x = 1;
    unsigned int sum = 0;

    do {
        sum += x;
        x += 2;
    } while ( x<= 99 );
    printf( "sum=%u\n", sum );
}