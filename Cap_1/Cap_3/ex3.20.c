# include <stdio.h>
# include <stdlib.h>

int main( void ){
    for( int i= 0; i < 5; i ++){
        for( int j = 0; j <= i; j++ ){
            printf( "*" );
        }
        printf( "\n" );
    }
    printf( "\n" ); 

    for( int i = 5; i > 0; i-- ){
        for( int j = 0; j < i; j++ ){
            printf( "*" );
        }
        printf( "\n" );
    }
    printf( "\n" );

    for( int i = 1; i <= 5; i++){
        for( int j = 5; j >= 1; j-- ){
            if( j <= i ){
                printf( "*" );
            } else {
                printf( " " );
            }
        }
        printf( "\n" );
    }
    printf( "\n" );
    
    for( int i = 5; i >= 1; i-- ){
        for( int j = 5; j > 0; j-- ){
            if( i >= j ){
                printf( "*" );
            } else {
                printf( " " );
            }
        }
        printf( "\n" );
    }
   
    return 0;
}