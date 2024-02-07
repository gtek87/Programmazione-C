// tabelline 
#include <stdio.h>

int main ( void )
{
    unsigned int x = 1;
    while ( x <= 10 ) {
        unsigned int y = 1;
        while ( y <= 10 ) {
            printf( "%u\t", x * y );
            ++y;
        }
        printf( "\n" );
        ++x;
    }
    
}