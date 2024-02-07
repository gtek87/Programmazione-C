// Una classe di dieci studenti effettua un quiz
// Si hanno a disposizione i voti ( numeri interi compresi tra 0 e 100)
// Determinare la media della classe 

#include <stdio.h>

int main (void)
{
    printf ("%s","Benvenuto nel calcolatore della media\n" );
    printf( "%s", " \n" );
    printf( "%s", "Prego, inserire i voti: \n" );

    int tot = 0 ; // somma dei voti
    int i = 1 ; // contatore dei voti
    int media;
    int voto ;

    while ( i <= 10 ) {
        scanf( "%d", &voto );
        tot = tot + voto;
        i++;
    }

    media = tot / 10 ;
    printf ( "La media della classe corrisponde a %d\n", media );

}