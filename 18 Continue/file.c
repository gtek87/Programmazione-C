#include <stdio.h>

int main ( void )
{
    for ( unsigned int x = 1; x <= 10; ++x) {
        if( x == 5 ) {
            continue; // interrompi se x = 5
        }
        printf("%u ", x );
    }
    puts("\nUsed continue to skip printig 5" );
}