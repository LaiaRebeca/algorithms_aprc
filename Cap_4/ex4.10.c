# include <stdio.h>
# include <stdlib.h>

#define N 5

int main( void ){

// variaveis
    int array[N];
    int arrayCopia[N];
    int maiores;
    int qtd = 0;

//entrada
    for( int i = 0; i < N; i++ ){
        printf( "array[%d]: ", i );
        scanf( "%d", &array[i] );
    }

    printf( "Copiar maiores que: " );
    scanf( "%d", &maiores );

// processamento
    for( int i = 0; i < N; i++ ){
        if( array[i] > maiores ){
            arrayCopia[qtd] = array[i];
            qtd++;
        }
    }


// saída
    if( qtd == 0 ){
        printf( "Nao houve copia!" );

    } else {
        for( int i = 0; i < qtd; i++ ){
            printf( "arrayCopia[%d] = %d\n", i, arrayCopia[i] );
        }

    }
    return 0;
}