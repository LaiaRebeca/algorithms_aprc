#include <stdio.h>
#include <stdlib.h>

int main( void ){
        float p;
        float a;
        float l;
        float h;

        printf( "Valor da largura:" );
        scanf( "%f", &l);
        printf( "Valor da altura:" );
        scanf( "%f", &h );

        p = 2*l + 2*h;
        a = l * h;

        printf( "Perimetro = %.2f\n", p );

        printf( "Area = %.2f\n", a );

        return 0;
}