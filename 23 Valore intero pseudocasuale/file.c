#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main ( void )
{
    srand(time(NULL));
    for (int i = 1; i <= 5; ++i ) {
        
        printf("%10d", 1 + (rand() % 6));
        // se i divisibile per 5, nuova riga
        if ( i % 5 == 0) {
            puts("");
        }
    }
}