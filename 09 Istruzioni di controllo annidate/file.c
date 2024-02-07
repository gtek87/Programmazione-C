/************************************************************************ 
    Registra i risultati di un esame per 10 studenti, 
    conta quanti di essi sono passati o non passati, 
    e stampa i risultati compresi un possibile "Bonus per l'insegnante!" 
    se la maggior parte degli studenti ha superato l'esame. 
*************************************************************************/

#include <stdio.h>

int main ( void )
{
    // inizializza le variabili nelle definizioni
    unsigned int passes = 0;
    unsigned int failures = 0;
    unsigned int student = 1;
    int result; // un risultato dell'esame

    // Processa 10 studenti
    // Ciclo controllato da contatore
    while ( student <= 10 ) {

        printf( "%s", "Result ( 1 = pass, 2 = fail ) : " );
        scanf( "%d", &result );

        if ( result == 1 ) {
            passes = passes + 1;
        } 
        else {
            failures = failures + 1;
        }
        student = student + 1;
    } // fine di while

    // fase di terminazione; stampa i risultati
    printf( "Passed %u\n", passes );
    printf( "Failed %u\n", failures );

    // decidi se stampare " Bonus to instructor!"
    if ( passes > 8 ) {
        puts( "Bonus to instructor!" );
    }
}
