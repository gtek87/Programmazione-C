#include <stdio.h>

int main ( void ) 
{
    printf( "Enter a char, EOF to end: \n" );

    int ch; // intero perché EOF = -1
    
    while( (ch = getchar()) != EOF ) { // ctrl z + invio
        if ( ch != '\n' ) { // gestione del carattere newline
            printf( "Char + 1 is: %c\n", ch+1 );
            printf( "Enter a char, EOF to end: \n" );
        }
    }
}