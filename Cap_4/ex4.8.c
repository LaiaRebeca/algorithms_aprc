# include <stdio.h>
# include <stdlib.h>

# define N 5

int main( void ){

// variaveis
    int array [N] = {0};
    int arrayPar [N] = {0};
    int arrayImpar [N] = {0};
    int qtdPar = 0;
    int qtdImpar = 0;

// entrada
    for( int i = 0; i < 5; i++ ){
        printf( "array [%d]: ", i );
        scanf( "%d", &array [i] );
    }

// processamento
    for( int i = 0; i < 5; i++ ){
        if( array [i] % 2 == 0 ){
            arrayPar [i] = array [i];
            qtdPar++;

        } else {
            arrayImpar [i] = array [i];
            qtdImpar++;
        }
    }

// saída
    printf( "Numeros pares:" );
    if( qtdPar <= 0 ){
        printf( " nao ha" );
    } else {
        for( int i = 0; i < 5; i++ ){
            if( arrayPar [i] != 0 ){

                printf( " %d", arrayPar[i] );
            }
        }
    }
    printf(".\n");

    printf( "Numeros impares:" );
    if( qtdImpar <= 0 ){
        printf( " nao ha" );
    } else {
        for( int i = 0; i < 5; i++ ){
            if( arrayImpar [i] != 0 ){
                printf( " %d", arrayImpar[i] );
            }
        }
    }
    printf(".");

    return 0;
}