/***********************************************************************************   
    Legge caratteri da input fino a quando viene inserito l'End of File (EOF) e,
    per ogni carattere diverso da un newline, stampa il carattere successivo 
    (incrementato di 1) sulla console. Il programma continua a chiedere all'utente 
    di inserire caratteri finché non viene inserito l'EOF.
************************************************************************************/

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