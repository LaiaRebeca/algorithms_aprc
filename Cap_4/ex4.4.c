# include <stdio.h>
# include <stdlib.h>

int main( void ){

// variaveis
    int array[5];
    int buscarPor;

// entrada
    for( int i = 0; i < 5; i ++ ){
        printf( "array [%d]: ", i );
        scanf( "%d", &array[i] );
    }
    
    printf( "Buscar por: " );
    scanf( "%d", &buscarPor );

// processamento +  saída
    for( int i = 0; i < 5; i++ ){
        if( array[i] == buscarPor ){
            printf( "Indice %d: ACHEI\n", i );

        } else {
            printf( "Indice %d: NAO ACHEI\n", i );
        }

    }

    return 0;
}