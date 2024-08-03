# include <stdio.h>
# include <stdlib.h>

# define N 10

int main( void ){

// variavies
    int array[N] = {0};
    int posicao;

// entrada
    for( int i = 0; i < N; i++ ){
        printf( "array[%d]: ", i );
        scanf( "%d", &array[i] );
    }

// processamento
    do{
        printf( "Posicao a ser removida (0 a 9): " );
        scanf( "%d", &posicao );
        if ( posicao < 0 || posicao > 9 ) {
            printf( "Posicao invalida, forneca novamente!\n" );
        }

    } while( posicao < 0 || posicao > 9 );
        for( int i = posicao; i < 9; i++ ) {
        array[i] = array[i+1];
    }

    for ( int i = 0; i < 9; i++ ) {
        printf( "array[%d] = %d\n", i, array[i] );
    }

    return 0;
}