#include <stdio.h>
#include <stdlib.h>

int main( void ){
        int numero1;
        int numero2;
        int numero3;

// entrada
        printf( "N1: " );
        scanf( "%d", &numero1 );
        printf( "N2: " );
        scanf( "%d", &numero2 );
        printf( "N3: " );
        scanf( "%d", &numero3 );

// saida
        if ( numero1 >= numero2 && numero2 >= numero3 ){
            printf( "%d >= %d >= %d", numero1, numero2, numero3 );

        } else if ( numero1 >= numero3 && numero3 >= numero2 ){
            printf( "%d >= %d >= %d", numero1, numero3, numero2 );

        } else if ( numero2 >= numero1 && numero1 >= numero3 ){
            printf( "%d >= %d >= %d", numero2, numero1, numero3 );
        
        } else if ( numero2 >= numero3 && numero3 >= numero1 ){
            printf( "%d >= %d >= %d", numero2, numero3, numero1 );

        } else if ( numero3 >= numero1 && numero1 >= numero2 ){
            printf( "%d >= %d >= %d", numero3, numero1, numero2 );

        } else {
            printf( "Ordem decrescente: %d >= %d >= %d", numero3, numero2, numero1 );

            return 0;
        }

}