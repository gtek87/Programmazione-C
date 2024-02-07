// Scrivere un programma che chieda all'utente due numeri 
// e ne stampi: somma, prodotto, differenza, quoziente e resto

#include <stdio.h>

int main (void)
{
    int primoNumero, secondoNumero;
    printf(" Inserire il primo numero:\n" );
    scanf( "%d", &primoNumero );
    printf( "Inserire il secondo numero:\n" );
    scanf( "%d", &secondoNumero );
    int somma;
    somma = primoNumero + secondoNumero;
    printf( "La somma corrisponde a %d\n", somma );
    int prodotto;
    prodotto = primoNumero * secondoNumero;
    printf( "Il prodotto corrisponde a %d\n", prodotto );
    int differenza;
    differenza = primoNumero - secondoNumero;
    printf( "La differenza corrisponde a %d\n", differenza );
    int quoziente;
    quoziente = primoNumero / secondoNumero;
    printf ( "Il quoziente corrisponde a %d\n", quoziente);
    int resto;
    resto = primoNumero % secondoNumero;
    printf ( "Il resto corrisponde a %d", resto );
}