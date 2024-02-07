/************************************************************************** 
    Una classe di dieci studenti effettua un quiz.
    Si hanno a disposizione i voti ( numeri interi compresi tra 0 e 100).
    Determinare la media della classe  
**************************************************************************/

# include <stdio.h> 

int main ( void )
{
    unsigned int counter; // contatore
    int grade; // valore del voto
    int total; // somma dei voti
    int average; // media dei voti

    // fase di inizializzazione
    total = 0; // inizializza il totale
    counter = 1; // inizializza il contatore

    // fase di elaborazione
    while ( counter <= 10 ) {
        printf( "%s", "Enter grade: " ); // prompt
        scanf( "%d", &grade ); // leggi il voto
        total = total + grade; // somma
        counter = counter + 1; // incrementa
    }

    // fase di terminazione
    average = total / 10; // divisione intera

    // stampa il risultato
    printf( "Class average is %d\n", average );
}