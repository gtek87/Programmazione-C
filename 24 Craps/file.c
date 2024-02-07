/* Il programma simula una partita di Craps, con lanci casuali dei dadi e la determinazione del vincitore o del perdente. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// costanti di enumerazione, per lo stato del gioco
enum Status { CONTINUE, WON, LOST };

int rollDice (void); // prototipo di funzione (non riceve alcun argomento)

int main (void)
{
    //randomizza il generatore di numeri casuali
    srand (time(NULL)); // generazione seme casuale 
    int myPoint;
    enum Status gameStatus; // conterrà CONTINUE, WON, LOST
    int sum = rollDice(); // primo lancio dei dadi

    switch(sum) {
        case 7: // si vince con 7
        case 11: // si vince con 11
           gameStatus = WON; // si vince al primo lancio
        break;

        case 2: // si perde con 2,3,12
        case 3:
        case 12:
           gameStatus = LOST;
        break;

        default: // ricorda il punteggio
           gameStatus = CONTINUE; // continua a lanciare
           myPoint = sum; // ricorda il punteggio
           printf( "Point is %d\n", myPoint );
        break;
    }
    // finchè il gioco non si conclude
    while (CONTINUE == gameStatus) {

        sum = rollDice();

        if (sum == myPoint) {
            gameStatus= WON;
        }
        else {
            if (7 == sum) {
                gameStatus = LOST;
            }
        }

    }

    // stampa il messaggio vincita o perdita

    if ( WON == gameStatus) {
        puts("You Win" );
    }
    else {
        puts("You Lose");
    }

}

int rollDice (void) 
{
    int die1 = 1 + (rand() % 6 ); // valore primo dado
    int die2 = 1 + (rand() % 6 ); // valore secondo dado

    // stampa i risultati del lancio

    printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
    return die1 + die2; // restituisce la somma dei dadi

}