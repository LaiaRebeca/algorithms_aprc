# include <stdio.h>
# include <stdlib.h>

int main( void ){

// variaveis
    int array[3][4];
    int mult;
    int arrayMult[3][4];

// entrada
    for( int i = 0; i < 3; i++ ){
        for( int j = 0; j < 4; j++ ){
            printf( "array[%d][%d]: ", i, j );
            scanf( "%d", &array [i][j] );
        }
    }
    printf( "Multiplicar por: " );
    scanf( "%d", &mult );

// processamento
    for( int i = 0; i < 3; i++ ){
        for( int j = 0; j < 4; j++ ){
            arrayMult[i][j] = array[i][j] * mult;
        }
    }

// saída
    printf( "arrayMult:\n" );

    for( int i = 0; i < 3; i++ ){
        for( int j = 0; j < 4; j++ ){
            if( j != 0 ){
                printf( " " );
            }
            printf( "%03d", arrayMult[i][j] );
        }
        printf( "\n" );
    }

    return 0;
}