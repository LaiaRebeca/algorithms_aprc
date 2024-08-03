# include <stdio.h>
# include <stdlib.h>

int main( void ){

// variaveis
    int array[5];
    int arrayCubo[5];

// entrada
    for ( int i = 0; i < 5; i++ ){
        printf( "array[%d]: ", i );
        scanf( "%d", &array[i] );
    }

// processamento
    for ( int i = 0; i < 5; i ++ ){
        arrayCubo[i] = array[i] * array[i] *array[i];
    }

// saída
    for ( int i = 0; i < 5; i++ ){
        printf( "arrayCubo[%d] = %d\n", i, arrayCubo[i] );
    }

    return 0;
}