# include <stdio.h>
# include <stdlib.h>

int main( void ){

//  variaveis
    int array1[3][2];
    int array2[2][3];
    int array[3][3];

// entrada
    for( int i = 0; i < 3; i++ ){
        for( int j = 0; j < 2; j++ ){
            printf( "array[%d][%d]: ", i, j );
            scanf( "%d", &array1[i][j] );
        }
    }
    for( int i = 0; i < 2; i++ ){
        for( int j = 0; j < 3; j++ ){
            printf( "array[%d][%d]: ", i, j );
            scanf( "%d", &array2[i][j] );
        }
    }

// processamento + saída
    printf( "A x B =\n" );
    for( int i = 0; i < 3; i++ ){
        for(  int j = 0; j < 3; j++ ){
            array [i][j] = array1[i][0]*array2[0][j]+array1[i][1]*array2[1][j];
            printf( "%03d", array[i][j] );
            if( j != 2 ){
                printf( " " );
            }
        }
        printf( "\n" );
    }

    return 0;
}