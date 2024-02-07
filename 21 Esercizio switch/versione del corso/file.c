#include <stdio.h>
int main (void )
{
    puts( "1 per area del cerchio" );
    puts( "2 per area del quadrato" );
    puts( "3 per area della sfera" );
    puts( "Inserisci l'opzione:" );

    unsigned int i;
    scanf( "%u", &i );

    float x,y;

    switch (i) {
        case 1: {
            puts( "Inserisci raggio: " );
            scanf("%f", &x );
            y = 3.14 * x * x;
            printf( "Area del cerchio: %f\n", y );
            break;
        }
        case 2: {
            puts( "Inserisci lato: " );
            scanf("%f", &x );
            y = x * x;
            printf( "Area del quadrato: %f\n", y );
            break;
        }
        case 3: {
            puts( "Inserisci raggio: " );
            scanf("%f", &x );
            y = 4 * 3.14 * x * x;
            printf( "Area della sfera: %f\n", y );
            break;
        }
        default: {
            puts( "Opzione non valida.");
        }
    }

}