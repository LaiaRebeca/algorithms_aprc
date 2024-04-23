#include <stdio.h>
#include <stdlib.h>

int main( void ){
        float l;
        float p;
        float a;

        printf( "Valor do lado:" );
        scanf( "%f", &l);

        p = 4 * l;
        a = l *l;

        printf( "Perimetro = %.2f\n", p);
        printf( "Area = %.2f\n", a );

        return 0;
}