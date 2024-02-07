/********************************************************
 
 Scrivere un programma con le seguenti opzioni di calcolo
 usando switch e case:

 1. Area del cerchio
 2. Area del quadrato
 3. Area di una sfera

 ********************************************************/

#include <stdio.h>
#include <math.h>

int main ( void )
{
    unsigned int x ;
    unsigned int y = 2;
    const double PI = 3.1415926535897932385;

    printf( "%s", "\n\t\t\tCalcolo delle aree" );
    printf("%s", "\n\n1. Area del cerchio\t2. Area del quadrato\t3. Area di una sfera\n" );
    printf("%s", "Inserire l'opzione: " ); 

    unsigned int i;
    scanf( "%d", &i );

    switch (i) {

        case 1 :
           printf( "%s", "Inserire il raggio del cerchio: " );
           scanf( "%d", &x );
           printf( "L'area del cerchio corrisponde a %.2f", pow(x,y) * PI );
           break;

        case 2 :
           printf( "%s", "Inserire il lato del quadrato: " );
           scanf( "%d", &x );
           printf( "L'area del quadrato corrisponde a %u", x * x );
           break;

        case 3 :
           printf( "%s", "Inserire il raggio della sfera: " );
           scanf( "%d", &x );
           printf( "L'area della sfera corrisponde a %.2f", pow(x,y)* PI * 4 );
           break;

        default: // cattura gli altri caratteri
           printf("%s", "Opzione non disponibile\n" );
           printf("%s", "Inserire l'opzione: " );
           break; // opzionale, esce comunque
    }
}