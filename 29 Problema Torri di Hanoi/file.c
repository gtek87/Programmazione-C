/***********************************************************
    Il programma risolve il problema delle Torri di Hanoi 
    per un numero specificato di dischi, stampando le 
    istruzioni passo-passo per lo spostamento dei dischi.
************************************************************/

#include <stdio.h>

// prototipo di funzione
void tower (int c, int start, int end, int temp);

int main ()
{
    printf("%s", "Enter the starting number of disks: " );
    int n; // numero di dischi
    scanf( "%d", &n );
    // stampa istruzione per spostare i dischi dal piolo 1 al piolo 3
    // usando il piolo 2 come deposito temporaneo
    tower(n, 1, 3, 2);
}

/* tower stampa ricorsivamente istruzioni per lo spostamento dei dischi
   dal piolo iniziale al piolo finale usando il piolo temp per deposito
   temporaneo */

void tower (int c, int start, int end, int temp)
{
    // caso di base
    if ( 1 == c ) {
        printf( "%d --> %d\n", start, end );
        return;
    }
    //sposta c - 1 dischi da start a temp
    tower ( c - 1, start, temp, end );
    // sposta l'ultimo disco da start a end
    printf( "%d --> %d\n", start, end );
    // sposta c - 1 dischi da temp a end
    tower ( c - 1, temp, end, start );  
}