#include <stdio.h>
#include <stdlib.h>

int lePositivo( void );
int somaDivisores( int n );

int main( void ){

    int n[5];

//entrada
    for( int i = 0; i < 5; i++ ){
        printf( "n[%d]: ", i );
        n[i] = lePositivo();
    }

// saída
    for( int i = 0; i < 5; i++ ){
        printf( "Soma dos divisores de %d: %d\n", n[i], somaDivisores(n[i]));
    }

    return 0;
}

// entrada
int lePositivo( void ){

    int valor;

    do{
        scanf( "%d", &valor );
        if( valor <= 0 ){
            printf( "Entre com um valor positivo: " );
        }

    } while ( valor <= 0 );

    return valor;
}

// processamento
int somaDivisores( int n ){

    int soma = 0;

    for( int i = 1; i < n; i++ ){
        if (n % i == 0)
        soma = soma + i;
    }

    return soma;
}