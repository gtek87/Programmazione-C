#include <stdio.h>

int main ( void ) 
{
    printf( "%s", "Enter a char, EOF to end: \n" );

    int ch; // intero perché EOF = -1
    
    while( (ch = getchar()) != EOF ) { // ctrl z + invio
        if ( ch != '\n' ) { // gestione del carattere newline
            printf( "Char + 1 is: %c\n", ch+1 );
            printf( "%s", "Enter a char, EOF to end: \n" );
        }
        else {
            printf("%s", "Void input: \n" );
            printf( "%s", "Enter a char, EOF to end: \n");
        }
    }
}