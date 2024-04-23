#include <stdio.h>
#include <stdlib.h>

int main( void ){
        float numero;

        printf( "Entre com um valor: ");
        scanf( "%f", &numero );

        if ( numero > 20 ) {
            printf( "A metade de 33.50 e %.2f", numero / 2 );

        } else {
            printf( "O triplo de 9.50 e %.2f ", numero * 3 );
        }

        return 0;

    }