# include <stdio.h>
# include <stdlib.h>

# define N 10

int main( void ){

// variaveis
    int array[N] = {0};
    int par;

    for( int i = 0; i < N; i++ ){
        printf( "array[%d]: ", i );
        scanf( "%d", &array[i] );
    }

// processamento
    while( par < 2 ){
        for( int i = 0; i < N; i++ ){
            if( array[i] % 2 == 0 ){
                par++;  
                for( int j = i; j < N - par; j++ ){
                    array[j] = array[j + 1];
                }
                i = 0;   
            }
        }
    }

// saída
    for( int i = 0; i < N - par; i++ ){
        printf( "\narray[%d] = %d", i, array[i] );
    }

    return 0;
}