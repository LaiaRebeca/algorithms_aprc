# include <stdio.h>
# include <stdlib.h>

# define N 5

int main( void ){

// variaveis
    int array[N];
    int arrayInv[N];

// entrada
    for( int i = 0; i < 5; i++ ){
        printf( "array[%d]: ", i );
        scanf( "%d", &array [i] );
    }

// processamento
    for( int i = 0; i < 5; i++ ){
        arrayInv[4-i] = array[i];
    }

//saída
    for( int i = 0; i < 5; i++ ){
        printf( "\narrayInv[%d] = %d", i, arrayInv[i] );
    }

    return 0;
}