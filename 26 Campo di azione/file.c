// Verifica del campo di azione

#include <stdio.h>

void useLocal (void); // prototipo di funzione
void useStaticLocal (void);
void useGlobal(void);

int x = 1; // varabile globale

int main (void)
{
    int x = 5; // variabile locale per main

    printf("local x in outer scope of main is %d\n", x);

    { // inizio nuovo campo di azione
       int x = 7; // variabile locale nel nuovo campo di azione

       printf("local x in inner scope of main is %d\n", x );

    } // fine nuovo campo di azione

    printf("local x in outer scope of main is %d\n", x );

    useLocal(); // ha una x locale automatica
    useStaticLocal(); // ha una x locale statica
    useGlobal(); // usa una x globale
    useLocal(); // reinizializza una x locale
    useStaticLocal(); // conserva il suo valore
    useGlobal(); // la x globale conserva il suo valore

    printf("\nlocal x in main is %d", x );
}

// reinizializza la variabile locale x durante ogni chiamata
void useLocal(void)
{
    int x = 25; // inizializzata ogni volta

    printf("\nlocal x in useLocal is %d after enter useLocal\n", x );
    ++x;
    printf("local x in useLocal is %d before exiting useLocal\n", x );
}

// inizializza la variabile statica locale x solo la prima volta
// che la funzione è chiamata. 
// Il valore di x è conservato tra una chiamata e l'altra a questa funzione
void useStaticLocal(void)
{
    // inizializza x una sola volta
    static int x = 50;

    printf("\nlocal static x is %d on entering useStatiLocal\n", x );
    ++x;
    printf("\nlocal static x is %d on entering useStaticLocal\n", x );
}

// useGlobal modifica la viariabile globale x in ogni chiamata
void useGlobal (void)
{
    printf("\nglobal x is %d on entering useGlobal\n", x );
    x *= 10;
    printf("global x is %d on exiting useGlobal|n", x );
}