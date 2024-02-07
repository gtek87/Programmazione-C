/********************************************************
 
 Scrivere un programma con le seguenti opzioni di calcolo
 usando switch e case:

 1. Area del cerchio
 2. Area del quadrato
 3. Area di una sfera

 INSERIRE VALORE SENTINELLA

 ********************************************************/

#include <stdio.h>
#include <math.h>

int main ( void )
{
    unsigned int x ;
    unsigned int y = 2;
    const double PI = 3.1415926535897932385;
    unsigned int i;

    printf( "%s", "\n\t\t\t\t\tCalcolo delle aree" );
    printf("%s", "\n1. Area del cerchio\t2. Area del quadrato\t3. Area di una sfera\t4.Termina il programma\n" );
    printf("%s", "\nInserire l'opzione: " ); 
    scanf ("%d", &i );
      
    while( i != 4 ) {

    switch (i) {

        case 1 :
           printf( "%s", "Inserire il raggio del cerchio: " );
           scanf( "%d", &x );
           printf( "L'area del cerchio di raggio %d corrisponde a %.2f\n", x, pow(x,y) * PI );
           break;

        case 2 :
           printf( "%s", "Inserire il lato del quadrato: " );
           scanf( "%d", &x );
           printf( "L'area del quadrato di lato %d corrisponde a %u\n", x,  x * x );
           break;

        case 3 :
           printf( "%s", "Inserire il raggio della sfera: " );
           scanf( "%d", &x );
           printf( "L'area della sfera di raggio %d corrisponde a %.2f\n", x, pow(x,y)* PI * 4 );
           break;

        default: // cattura gli altri caratteri
           puts( "Valore non ammesso, riprovare" );
           break;
    }
    printf("%s", "\n1. Area del cerchio\t2. Area del quadrato\t3. Area di una sfera\t4.Termina il programma\n" );
    printf("%s", "\nInserire l'opzione: " ); 
    scanf ("%d", &i ); 
   }
}