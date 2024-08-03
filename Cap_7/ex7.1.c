#include <stdio.h>
#include <stdlib.h>

int absoluto( int n );     //prototipo da função

int main( void ){

    int n[5];

// entrada
    for( int i = 0; i < 5; i++ ){
        printf( "n%d: ", i );
        scanf( "%d", &n[i] );
    }

// processamento + saída
    for( int i = 0; i < 5; i++ ){
        printf( "absoluto(%d) = %d\n", n[i], absoluto(n[i]) );
    }

    return 0;
}

int absoluto( int n ){
    if( n >= 0 ){
        return n;

    } else {
        return -n;
    }
}