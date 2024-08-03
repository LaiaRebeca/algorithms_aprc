#include <stdio.h>
#include <stdlib.h>

void classificaDupla( int n1, int n2 );

int main( void ){

    int n1[3];
    int n2[3];

// entrada
    for( int i = 0; i < 3; i++ ){
        printf( "n1[%d]: ", i );
        scanf( "%d", &n1[i] );

        printf( "n2[%d]: ", i );
        scanf( "%d", &n2[i] );
    }

// processamento + saída
    for( int i = 0; i < 3; i++ ){
        classificaDupla( n1[i], n2[i] );
    }

    return 0;
}

void classificaDupla( int n1, int n2 ){

    if ( n1 <= n2 ){
        printf( "%d e %d: %d <= %d\n", n1, n2, n1, n2 );
    } else {
        printf( "%d e %d: %d <= %d\n", n1, n2, n2, n1 );
    }
}