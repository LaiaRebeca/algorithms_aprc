#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( void ){

    float num;

    printf( "Numero: " );
    scanf( "%f", &num );

    printf( "Valor absoluto: %.2f", fabs(num) );

    return 0;
}