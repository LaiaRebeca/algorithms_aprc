# include <stdio.h>
# include <stdlib.h>

int main( void ){
    
    int termo;
    int resultado;
    int termo1 = 1;
    int termo2 = 1;

// entrada
    printf( "Termo desejado: " );
    scanf( "%d", &termo );

// saida
    
    if( termo < 2 ){
        printf( "Fibonacci de %d e 1", termo );

    } else {

        for( int i = 1; i <= termo - 1; i++ ){
        resultado = termo1 + termo2;
        termo2 = termo1;
        termo1 = resultado;
        }

        printf( "Fibonacci de %d e %d ", termo, resultado);

    }
    
    return 0;
}