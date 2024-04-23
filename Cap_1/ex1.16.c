#include <stdio.h>
#include <stdlib.h>

int main( void ){
        float a;
        float b;
        float h;

        printf( "Valor da base: ");
        scanf( "%f", &b );
        printf( "Valor da altura:" );
        scanf( "%f", &h );

        a = b * h / 2;

        printf( "Area = %.2f\n", a );

        return 0;
}