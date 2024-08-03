#include <stdio.h>
#include <stdlib.h>

int buscar( const int *a, int n, int chave );

int main( void ){

    int array[10];
    int n = 10;
    int buscarPor; //chave
    int local;

// entrada
    for( int i = 0; i < 10; i++ ) {
        printf( "n[%d]: ", i );
        scanf( "%d", &array[i] );
    }

    printf( "Buscar por: " );
    scanf( "%d", &buscarPor );

// processamento + saída
    local = buscar( array, n, buscarPor );

    if( local != -1 ){
        printf( "O valor %d foi encontrado na posicao %d.", buscarPor, local );
    } else {
        printf( "O valor %d nao foi encontrado.", buscarPor );
    }

    return 0;
}

int buscar( const int *a, int n, int chave ) {

    for( int i = 0; i < n; i++ ) {
        if( a[i] == chave ){
            return i;
        }
    }
    return -1;

}