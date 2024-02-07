#include <stdio.h>

int main ( void )
{
    

    puts ("X\tFactorial of X" );
    for( unsigned int i = 1 ; i <= 5 ; i++ ) {
        unsigned int factorial =1;
        // calcola il fattoriale del numero corrente
        for(unsigned int j = 1; j <= i; j++ ) { // ciclo for annidato confronto con i
            factorial *= j;
        }
        printf( "%u\t%u\n", i, factorial );
    }
}