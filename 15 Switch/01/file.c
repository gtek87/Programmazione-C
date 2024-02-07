#include <stdio.h>

int main ( void )
{
    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 0;

    puts( "Enter the grades, EOF to end input: \n" );

    int grade;

    while ((grade = getchar()) != EOF ) {

        switch (grade) {

            case 'A' : // voto lettera maiuscola
            case 'a' : // voto lette minuscola
               ++aCount;
               break;

            case 'B':
            case 'b':
               ++bCount;
               break;

            case 'C':
            case 'c':
               ++cCount;
               break;

            case '\n': // ignora i newline
            case '\t': // ignora tabulazioni
            case ' ': // ignora spazi input
               break;

            default: // cattura gli altri caratteri
               printf("%s", "Incorrect letter" );
               puts(" Enter a new grade." );
               break; // opzionale, esce comunque
        } //  fine di switch
    } // fine di while

    // stampa riepilogo risultati
    puts("\nTotals:");
    printf("A: %u\n", aCount );
    printf("B: %u\n", bCount );
    printf("C: %u\n", cCount );
}