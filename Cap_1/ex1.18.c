#include <stdio.h>
#include <stdlib.h>

int main( void ) {
        float a;
        float D;
        float d;

        printf( "Valor da diagonal maior:" );
        scanf( "%f", &D );
        printf( "Valor da diagonal menor:" );
        scanf( "%f", &d );

        a = D * d / 2;

        printf( "Area = %.2f\n", a );
        
        return 0;
}