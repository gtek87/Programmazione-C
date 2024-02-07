// Trovare la prima potenza di 3 maggiore di 100
#include <stdio.h>

int main (void)
{
    int product = 3 ;
    while ( product <= 100 ) {
        product = 3 * product ;
    }
    printf ( "La prima potenza di 3 maggiore di 100 e' %d\n", product);
}