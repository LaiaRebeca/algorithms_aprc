# include <stdio.h>
# include <stdlib.h>

int main( void ){
    
    int altura;
    
    printf( "Altura: " );
    scanf( "%d", &altura );

    if( altura >= 0) {
        for( int i = 1 ; i <= altura ; i++ ) {
            for( int j = 1 ; j <= altura - i ; j++ ) {
                printf( " " );
            }

            for( int j = 1 ; j <= i ; j++ ) {
                printf( "*" );
            }

            for( int j = 1 ; j <= i - 1 ; j++ ) {
                printf( "*" );
            }
            printf( "\n" );
        }

    } else if( altura <= 0 ) {
        altura = -altura;

        for( int i = altura ; i >= 1 ; i-- ) {
            for( int j = 1 ; j <= altura - i ; j++ ) {
                printf(" ");
            }

            for( int j = 1 ; j <= i ; j++ ) {
                printf( "*" );
            }

            for( int j = 1 ; j <= i - 1 ; j++ ) {
                printf( "*" );
            }
            printf( "\n" );
        } 
    }

    return 0;
}