# include <stdio.h>
# include <stdlib.h>

# define N 10

int main( void ){

// variaveis
    int array[N];
    int qtd;
    int valor;

// entrada + processamento
    do{
        printf( "Quantidade de elementos (1 a 9): " );
        scanf( "%d", &qtd );
        if( qtd < 1 || qtd > 9 ){
            printf( "Quantidade incorreta, forneca novamente!" );
        }

    } while ( qtd < 1 || qtd > 9 );
        
    for( int i = 0; i < qtd; i++ ){
        printf( "array[%d]: ", i );
        scanf( "%d", &array [i] );
    }
        
    printf( "Valor que sera inserido: " );
    scanf( "%d", &valor );

    for ( int i = 9; i > 0; i-- ) {
        array[i] = array[i-1];
    }
    array[0] = valor;

// saída
    for( int i = 0; i <= qtd; i++ ){
        printf( "array[%d] = %d\n", i, array[i] );
    }

    return 0;
}