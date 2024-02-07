#include <stdio.h>

int main ( void )
{
    int num1;
    printf( "%s", "Input an integer: \n" );
    scanf( "%d", &num1 );

    if ( num1 % 2 == 0 ) {
        printf( " %d is an even integer\n", num1 );
    }
    if ( num1 % 2 != 0 ) {
        printf( " %d is an odd integer\n", num1);
    }

}