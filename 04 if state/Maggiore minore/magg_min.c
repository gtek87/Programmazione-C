#include <stdio.h>

int main (void)
{
    printf( "%s", "Insert two integers: \n");
    int num1, num2;
    scanf( "%d %d", &num1, &num2 );
    if ( num1 > num2 ) {
        printf( " %d is grater than %d\n", num1, num2 );
    }
    if ( num1 < num2 ) {
        printf( "%d is less than %d\n", num1, num2 );
    }
   
}