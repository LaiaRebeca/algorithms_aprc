# include <stdio.h>
# include <stdlib.h>

int main( void ){

    int num;
    int array[100][100];

    printf( "Numero entre 1 e 100: " );
    scanf( "%d", &num );

    if( num < 1 || num > 100 ){
        printf( "Numero incorreto! " );

    } else {
        for( int i = 0; i < num; i++ ){
            for( int j = 0; j < num; j++){
                if( i <= j ){
                    array[i][j] = (j - i ) + 1;

                } else {
                    array[i][j] = (i - j ) + 1;
                }
            }
        }

        for( int i = 0; i < num; i++ ){
            for( int j = 0; j < num; j++ ){
                printf( "%3d", array[i][j] );
                if( j < num - 1 ){
                    printf( " " );
                }
            }
            printf( "\n" );

        }
    }

    return 0;
}