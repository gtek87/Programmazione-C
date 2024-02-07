/*****************************************************************
	Il programma chiede all'utente di inserire due numeri interi,
	 li somma e stampa il risultato sulla console.
*****************************************************************/ 

#include <stdio.h>

int main (void)
{
	int integer1;
	int integer2;
	
    printf("Inserire il primo numero da sommare:\n");
	scanf("%d", &integer1);

	printf("Inserire il secondo numero da sommare:\n");
	scanf("%d", &integer2);

	int somma;
	somma= integer1+ integer2;

	printf("La somma corrisponde a %d\n", somma);
	printf("  \n");
}