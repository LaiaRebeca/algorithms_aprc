# include <stdio.h>
# include <stdlib.h>

int main( void ){

// variaveis
    int array[2][2];
    int det;

// entrada
    for( int i = 0; i < 2; i++ ){
        for( int j = 0; j < 2; j++ ){
            printf( "array[%d][%d]: ", i, j );
            scanf( "%d", &array[i][j] );
        }
    }

// processamento
    det = array[0][0] * array[1][1] - ( array[0][1] * array[1][0] );


// saída
    printf( "Determinante: %d ", det );

    return 0;
}