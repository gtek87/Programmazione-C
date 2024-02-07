//Stampare gli interi da 1 a 20 usando un ciclo while
//solo 5 interi per riga

#include <stdio.h>

int main ( void )
{
    unsigned int i = 1;
    while( i <= 20 ) {
        if ( i % 5 == 0 ){
            printf( "%u\n", i++ );
        } else {
            printf( "%u\t", i++ );
        }
        
    }
}