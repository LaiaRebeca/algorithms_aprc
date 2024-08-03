# include <stdio.h>
# include <stdlib.h>

# define N 5

int main( void ){

// variaveis
    int array[N];
    int arrayMult[N];
    int mult;

// entrada
    for( int i = 0; i < N; i++ ){
        printf( "array[%d]: ", i );
        scanf( "%d", &array[i] );
    }

    printf( "Multiplicar por: " );
    scanf( "%d", &mult );

// processamento
    for( int i = 0; i < N; i++ ){
        arrayMult[i] = array[i] * mult;
    }

// saída
    for( int i = 0; i < N; i++ ){
        printf( "arrayMult[%d] = %d\n", i, arrayMult[i] );  
    }

    return 0;
}