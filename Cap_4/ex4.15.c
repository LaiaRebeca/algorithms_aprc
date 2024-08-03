# include <stdio.h>
# include <stdlib.h>

# define N 5

int main( void ){

// variaveis
    int array1[N];
    int array2 [N];
    int arrayIntersec [N];
    int qtd = 0;
    int achou;
        
// entrada
    printf( "Forneca os valores do primeiro array:\n" );
    for( int i = 0; i < N; i++ ){
        printf( "array1[%d]: ", i );
        scanf( "%d", &array1[i]);
    }

    printf( "Forneca os valores do segundo array:\n" );
    for( int j = 0; j < N; j++ ){
        printf( "array2[%d]: ", j );
        scanf( "%d", &array2[j] );
    }

// processamento
    for( int i = 0; i < N; i++ ){
        for( int j = 0; j < N; j++ ){
            if( array1[i] == array2[j] ){
                if( qtd > 0 ){
                    for( int k = 0; k < qtd; k++ ){
                        if( arrayIntersec[k] == array1[i] ){
                            achou = 1;
                            break;
                        }
                    }
                    if( achou != 1 ){
                        arrayIntersec[qtd] = array1[i];
                        qtd++;
                        achou = 0;
                        break;
                    }
                } else {
                    arrayIntersec[qtd] = array1[i];
                    qtd++;
                    achou = 0;
                    break;
                }
            }
        }
    }


// saída
    if ( qtd > 0 ){
        for( int i = 0; i < qtd; i++ ){
        printf( "arrayInterseccao[%d] = %d\n", i, arrayIntersec[i] );
        }
    } else {
        printf( "Nao ha interseccao entre os elementos dos dois arrays fornecidos!");
    }

    return 0;
}