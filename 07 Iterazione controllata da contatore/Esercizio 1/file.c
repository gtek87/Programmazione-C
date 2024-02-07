/************************************************************
    Realizzare un programma che incrementi 10 volte
    (visualizzando il risultato) un int con valore iniziale
    uguale a 2147483648
*************************************************************/ 

# include <stdio.h>

int main (void)
{
    int n = 2147483642;
    int i = 1;

    while ( i <= 10 ) {
        printf ( "%d\n", n+i );
        i++;
    }
}