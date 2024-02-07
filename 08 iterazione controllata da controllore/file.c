/************************************************************************** 
    Una classe effettua un quiz.
    Si hanno a disposizione i voti ( numeri interi compresi tra 0 e 100).
    Determinare la media della classe  
**************************************************************************/
#include <stdio.h>

int main( void )
{
    unsigned int counter; // contatore
    int grade; // valore del voto
    int total; // somma dei voti
    int average; // media dei voti

    // fase di inizializzazione
    total = 0; // inizializza il totale
    counter = 1; // inizializza il contatore

    // fase di elaborazione
    // prompt dell'input, primo voto
    printf( "%s", "Enter grede, -1 to end: ");
    scanf( "%d", &grade ); // leggi il voto

    while ( grade != -1 ) {
        total = total + grade; // somma il voto
        counter = counter + 1; // incrementa il contatore
        printf( "%s", "Enter grade, -1 to end: " ); // prompt
        scanf( "%d", &grade ); // leggi il voto
    }
    
    // se l'utente ha inserito almeno un voto
    if ( counter != 0 ) {

        average = total / counter; // divisione intera
        printf( "Class average is %d", average );

    } else {    // se non sono stati inseriti i voti
        puts ( "No grades were entered" );
    } 
}