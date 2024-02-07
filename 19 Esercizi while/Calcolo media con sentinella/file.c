/********************************************
 Calcolare la media di una sequenza di interi
 Scrivere un programma che calcoli e stampi 
 la media di diversi numeri interi

 Supponendo che l'ultimo valore letto sia la 
 sentinella 9999. Usare l'istruzione while.
********************************************/

 #include <stdio.h>

 int main ( void )
 {
     printf( "%s", "Enter an int (9999 to end): " );
     int value; // valore corrente
     scanf( "%d", &value );
     
     unsigned int counter = 0;
     int total = 0;

     while ( value != 9999 ) {
         total += value;
         ++counter;
         printf( "%s","Enter int (9999 to end): " );
         scanf( "%d", &value );
     }

     if ( counter != 0 ) {
         printf("%s", "\nThe average is " );
         printf( "%.2f\n", (double) total / counter );
     }
     else {
         puts("\nNo values were entered." );
     }
 }



