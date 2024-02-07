#include <stdio.h>

// prototipo di funzione
int maximum (int x, int y, int z );

int main (void) {

    int n1, n2, n3;
    printf("%s", "Enter three integers: " );
    scanf("%d%d%d", &n1, &n2, &n3 );

    // chiamata della funzione maximum
    printf( "Maximum: %d\n", maximum( n1, n2, n3 ));
}
 // definizione della funzione maximum
 int maximum (int x, int y, int z)
 {
     int max = x; // supponi che x sia il maggiore

     if (y > max) {  // se y è più grande di max,
         max = y; // assegna y a max
     }
     if ( z > max) { // se z è più grande di max,
         max = z; // assegna z a max
     }
     return max;
 }

