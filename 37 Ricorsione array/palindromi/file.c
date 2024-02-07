#include <stdio.h>
#define SIZE 80

// prototipo di funzione che riceve un array di carattere e due interi
int testPalindrome (char array [], int left, int right); 

int main (void)
{
    char string [SIZE]; // stringa originale
    char copy[SIZE]; // copia della stringa senza spazi
    puts("Please, insert a sentence: ");
    char c; // tiene temporaneamente l'input
    unsigned int count = 0; // lunghezza della stringa senza spazi
    // ricevi la frase da testare dall'utente
    while ((c = getchar()) != '\n' && count < SIZE) {  
        string[count++] = c;
    }
    string[count] = '\0'; // termina la stringa
    unsigned int copyCount = 0;
    // crea una copia della stringa senza spazi
    for (unsigned int i = 0; string [i] != '\0'; ++i) {
        if (string[i] != ' ' && string [i] != ',' && string [i] != '.' && string [i] != '!') {
            copy[copyCount++] = string [i];
        }
    }
    // stampa se la frase è non è un palindromo
    if(testPalindrome(copy, 0, copyCount - 1)) { // chiamata di funzione 
        printf("\"%s\" is a palindrome\n", string);
    }
    else {
        printf("\"%s\" is not a palindrome\n", string);
    }
}

// funzione test palindromo
int testPalindrome (char array [], int left, int right)
{
    if (left == right || left > right) {
        return 1;
    }
    else if (array [left] != array[right]) {
        return 0;
    }
    else {
        return testPalindrome(array, left + 1, right - 1); 
    }
}
