#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// le costanti di enumerazione rappresentano lo stato del gioco

enum Status { CONTINUE, WIN, LOST };

// prototipi di funzione

int rollDice (void);
enum Status craps (void);
void chatter (void);

int main ()
{
    srand(time(NULL)); // seme generatore numeri casuali
    // stampa il saldo corrente e chiedi la puntata
    int bankBalance = 1000; // saldo
    printf("You have %d in the bank.\n", bankBalance );
    printf("%s","Place your wager: " );
    int wager;
    scanf("%d", &wager );
    // ripeti finche la puntata non è valida
    while ( wager <= 0 || wager > 1000 ) {
        printf("%s", "Please bet a vali amount.\n" );
        scanf("%d", &wager );
    }
    enum Status result = craps(); // gioca la mano di craps
    // se il giocatore ha perso la mano corrente
    if (LOST == result ) {
        // diminuisci il saldo in base alla puntata e stampa quello nuovo
        bankBalance -= wager;
        printf("Your new bank balance il %d\n", bankBalance );
        // se il saldo è zero
        if ( 0 == bankBalance ) {
            puts("Sorry. You are Busted! Thank You For Playing." );
        }
    }
    else { // se il giocatore vince
    // aumenta il saldo in base alla puntata e stampa il nuovo
    bankBalance += wager;
    printf("Your new bank balance is %d\n", bankBalance );
    }
} // fine main

// lancio dei dadi, calcola la somma e stampa i risultati
int rollDice(void)
{
    int die1 = 1 + rand() % 6;
    int die2 = 1 + rand() % 6;
    int workSum = die1 + die2;

    printf("Player rolled %d + %d = %d ", die1, die2, workSum );
    return workSum; // ritorno della somma dei dadi
}

// mano di craps, restituisce il risultato della mano
enum Status craps (void)
{
    enum Status gameStatus; // conterrà CONTINUE, WON, LOST
    int myPoint; //valore del punto
    int sum = rollDice(); // primo lancio dei dadi
    // determina stato del gioco e punto in base alla somma dei dadi
    switch(sum) {
        case 7: // si vince con 7
        case 11: // si vince con 11
           gameStatus = WIN; // si vince al primo lancio
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
           chatter();
           break;
    }

    // finchè il gioco non è completo
    while (CONTINUE == gameStatus ) {
        chatter();
        sum = rollDice(); // nuovo lancio dei dadi

        // determina lo stato del gioco
        if (sum == myPoint) {
            gameStatus = WIN;
        }
        else{
            if ( 7 == sum ) {
                gameStatus = LOST; // sconfitta tirando 7
            }
        }
    }
    // stampa il messaggio di vittoria o di sconfitta e restituisce lo stato
    if (WIN == gameStatus ){
        puts("Player wins");
        return WIN;
    }
    else {
        puts("Player loses");
        return LOST;
    }
}
// chatter stampa i messaggi a caso
void chatter(void)
{
   int select = 1 + rand() % 6;
   // scelta casuale del messaggio
   switch (select) {
   case 1:
      printf("Oh, you're going for broke, huh?\n");
      break; // uscita dallo switch
   case 2:
      printf("Aw cmon, take a chance!\n");
      break; // uscita dallo switch
   case 3:
      printf("Hey, I think this guy is going to break the bank!!\n");
      break; // uscita dallo switch
   case 4:
      printf("You're up big. Now's the time to cash!\n");
      break; // uscita dallo switch
   case 5:
      printf("Way too lucky! Those dice have to be loaded!\n");
      break; // uscita dallo switch
   case 6:
      printf("Bet it all! Bet it all!\n");
      break; // uscita dallo switch
      default:
      break; // uscita dallo switch
   }
}