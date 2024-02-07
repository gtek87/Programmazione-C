/************************************************************************************ 
    Illustra l'uso degli array di caratteri e mostra come accedere e stampare 
    caratteri individuali in una stringa, con un limite massimo di caratteri 
    inseriti dall'utente.
************************************************************************************/

#include <stdio.h>
#define SIZE 20

int main (void)
{
    char string1 [SIZE]; // riserva 20 caratteri
    char string2 [] = "string literal"; // riserva 15 caratteri

    // memorizza la stringa inserita dall'utente
    printf("%s", "Enter a string (n <= 19 ch): " );
    scanf("%19s", string1 ); // leggi <= 19 caratteri

    // stampa le stringhe
    printf("string1 is: %s\n", string1 );
    printf("string2 is: %s\n", string2 );
    printf("string1 with spaces between characters is: \n" );

    // stampa i caratteri finché non si raggiunge il carattere nullo

    for (size_t i = 0; i<SIZE && string1 [i] != '\0'; ++i) {

        printf("%c ", string1[i]);
    }

    puts(" ");
}