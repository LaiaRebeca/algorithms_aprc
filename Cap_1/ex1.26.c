# include <stdio.h>
#include <stdlib.h>

int main( void ){
        float fah;
        float cel;

        printf( "Temperatura em graus Celsius: ");
        scanf( "%f", &cel );

        fah = 1.8 * cel + 32;

        printf( "36.00 graus Celsius correspondem a %.2f graus Fahrenheit ", fah );

        return 0;
}