// programma in linguaggio C che chiede all'utente due numeri 
// e successivamente li somma

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