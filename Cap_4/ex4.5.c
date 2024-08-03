# include <stdio.h>
# include <stdlib.h>

int main( void ){

// variaveis
    int array [5];
    int buscarPor;
    int ocorrencias = 0;

// entrada
    for( int i = 0; i < 5; i++ ){
        printf( "array [%d]: ", i );
        scanf( "%d", &array[i] );
    }

    printf( "Buscar por: " );
    scanf( "%d", &buscarPor );

// processamento
    for( int i = 0; i < 5; i++ ){
        if( array[i] == buscarPor ){
            ocorrencias++;
        }
    }

// saída
    if ( ocorrencias == 0 ) {
        printf( "O array nao contem o valor %d.", buscarPor );
    } else if ( ocorrencias == 1 ) {
        printf( "O array contem 1 ocorrencia do valor %d.", buscarPor );
    } else {
        printf( "O array contem %d ocorrencias do valor %d.", ocorrencias, buscarPor );
    }

    return 0;
}