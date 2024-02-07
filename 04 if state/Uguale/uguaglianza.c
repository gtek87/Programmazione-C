#include <stdio.h>

int main (void)
{
    printf( "%s","Enter two integers: " );
    int num1, num2;
    scanf( "%d %d", &num1, &num2 );
    if ( num1 == num2) {
        printf( "%d is equal to %d\n", num1, num2 );
    }
    if (num1 != num2) {
        printf( "%d is not equal to %d\n", num1, num2 );
    }
}