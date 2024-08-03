# include <stdio.h>
# include <stdlib.h>

# define N 5

int main( void ){

// variaveis
    int array[N];
    int arrayPosicoes[N];
    int buscarPor;
    int ocorrencias = 0;

// entrada
    for( int i = 0; i < N; i++ ){
        printf( "array[%d]: ", i );
        scanf( "%d", &array[i] );
    }
    printf( "Buscar por: " );
    scanf( "%d", &buscarPor );

// processamento
    for( int i = 0; i < N; i++ ){
        if( array[i] == buscarPor ){
            arrayPosicoes[ocorrencias] = i;
            ocorrencias++;
        }
    }

// saída
    if( ocorrencias == 0 ){
        printf( "O array nao contem o valor %d.", buscarPor );
    } else {
        if( ocorrencias == 1 ){
            printf( "O valor %d foi encontrado no indice %d do array.", 
                    buscarPor, arrayPosicoes[0] );
        } else {
            printf( "O valor %d foi encontrado nos indices ", buscarPor );
            for ( int i = 0; i < ocorrencias; i++ ){
                if( i == ocorrencias - 1 ){
                    printf( " e %d", arrayPosicoes[i] );

                } else if ( i == 0 ){
                    printf( "%d", arrayPosicoes[i] );

                } else {
                    printf( ", %d", arrayPosicoes[i] );
                }
            }
            printf( " do array." );
        }
    }

    return 0;
}