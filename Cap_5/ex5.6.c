# include <stdio.h>
# include <stdlib.h>

int main( void ){

// variaveis
    int array[2][3];
   
// entrada
    for( int i = 0; i < 2; i++ ){
        for( int j = 0; j < 3; j++ ){
            printf( "array[%d][%d]: ", i, j );
            scanf( "%d", &array[i][j] );
        }
    }

// processamento + saída
    printf( "M:\n" );
    for( int i = 0; i < 2; i++ ){
        for( int j = 0; j < 3; j++ ){
            printf( "%03d", array[i][j] );
            if( j != 2 ){
                printf( " " );
            }
        }
        printf( "\n" );
    }
    printf( "\n" );

    printf( "Mt:\n" );
    for( int j = 0; j < 3; j++ ){
        for( int i = 0; i < 2; i++ ){
            printf( "%03d", array[i][j] );
            if( i != 1 ){
                printf( " " );
            }
        }
        printf( "\n" );
    }

    return 0;
}