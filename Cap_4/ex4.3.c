# include <stdio.h>
# include <stdlib.h>

# define N 5

int main( void ){

// variaveis
    float array [N];
    float soma = 0;
    float produto = 1;

// entrada
    for( int i = 0; i < N; i++ ){
        printf( "array[%d]: ", i );
        scanf( "%f", &array[i] );
    }
    
// processamento
    for(int i = 0; i < N; i++){
        soma += array[i];
        produto *= array[i];
    }

// saída
    printf("Somatorio: %.2f\n", soma);
    printf("Produtorio: %.2f\n", produto);

    return 0;
}