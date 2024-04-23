#include <stdio.h>
#include <stdlib.h>

int main( void ){
        float a;
        float B;
        float b;
        float h;

        printf( "Valor da base maior:" );
        scanf( "%f", &B );
        printf( "Valor da base menor:" );
        scanf( "%f", &b );
        printf( "Valor da altura:" );
        scanf ( "%f", &h );

        a = (B + b) * h / 2;

        printf( "Area = %.2f\n", a );
        
        return 0;
}