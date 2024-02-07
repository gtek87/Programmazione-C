#include <stdio.h>

int main ( void )
{
    unsigned int counter; // contatore
    int grade; // valore del voto
    int total; // somma dei voti inseriti
    float average; // media dei voti

    // fase di inizializzaizone
    total = 0;
    counter = 0;

    // fase di elaborazione
    while ( counter < 8 ) {  // ripeti 8 volte
        printf( "%s", "Enter grade: " ); // prompt
        scanf( "%d", &grade ); // leggi il voto
        total += grade; // somma il voto
        counter ++; // incrementa
    }

    // fase di terminazione 
    average = ( float ) total / counter;
    // stampa il risultato
    printf( "Class average is %.2f\n", average );

}