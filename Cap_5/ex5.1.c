# include <stdio.h>
# include <stdlib.h>

# define LINHAS 3
# define COLUNAS 2

int main( void ){

// variaveis
    int array[LINHAS][COLUNAS];

// entrada
    for( int  i = 0; i < LINHAS; i++ ){
        for( int j = 0; j < COLUNAS; j++ ){
            printf( "array[%d][%d]: ", i, j );
            scanf( "%d", &array[i][j] );
        }
    }

// processamento + saída
    for( int i = 0; i < LINHAS; i++ ){
        for( int j = 0; j < COLUNAS; j ++ ){
            if( j != 0 ){
                printf( " " );
            }
            printf( "%03d", array[i][j] );
        }
        printf( "\n" );
    }


    return 0;
}