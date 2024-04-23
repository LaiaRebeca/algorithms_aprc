# include <stdio.h>
# include <stdlib.h>

int main( void ){
        float fah;
        float cel;
        float temperatura;
        
        printf( "Temperatura em graus Fahrenheit: ");
        scanf( "%f", &fah );

        temperatura = fah - 32;
        cel = temperatura / 1.8;

        printf( "%.2f graus Faherenheit correspondem a %.2f graus Celsius ", fah, cel );

        return 0;
}