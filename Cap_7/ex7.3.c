#include <stdio.h>
#include <stdlib.h>

float maiorNumero( float n1, float n2 );

int main( void ){

    float array1[5];
    float array2[5];

//entrada
    for( int i = 0; i < 5; i++ ){

        do{
            printf( "n1[%d]: ", i );
            scanf( "%f", &array1[i] );

            if( array1[i] <= 0 ){
                printf( "Entre com um valor positivo!\n" );
            }

        } while( array1[i] <= 0 );
        
        do {
            printf( "n2[%d]: ", i );
            scanf( "%f", &array2[i] );
            
            if( array2[i] <= 0 ){
                printf( "Entre com um valor positivo!\n" );
            }

        } while( array2[i] <= 0 );    
    }

// processamento + saída
    for( int i = 0; i < 5; i++ ){
        if( maiorNumero( array1[i], array2[i]) == -1 ){
            printf( "%.2f, %.2f: Eles sao iguais\n", array1[i], array2[i]);

        } else {
            printf( "%.2f, %.2f: O maior valor e %.2f\n", array1[i], array2[i], maiorNumero( array1[i], array2[i]));
        }

    }

    return 0;
}

float maiorNumero( float n1, float n2 ){

   if (n1 == n2) {
        return -1;

    } else if (n1 > n2) {
        return n1;

    } else {
        return n2;
    }
   
}
