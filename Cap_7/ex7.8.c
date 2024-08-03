#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int lePositivo( void );
bool saoAmigos( int n1, int n2 );

int main( void ){

    int n1[5];
    int n2[5];

// entrada
    for( int i = 0; i < 5; i++ ){
        printf( "n1[%d]: ", i );
        n1[i] = lePositivo();

        printf( "n2[%d]: ", i );
        n2[i] = lePositivo();
    }

// saída
    for( int i = 0; i < 5; i++ ){
        if( saoAmigos ( n1[i], n2[i] ) == true ){
            printf( "%d e %d sao amigos\n", n1[i], n2[i] );
        } else {
            printf( "%d e %d nao sao amigos\n", n1[i], n2[i] );
        }
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
bool saoAmigos( int n1, int n2 ){

    int soma1 = 0;
    int soma2 = 0;

    for( int i = 1; i < n1; i++ ){
        if (n1 % i == 0)
        soma1 = soma1 + i;
    }

    for( int i = 1; i < n2; i++ ){
        if (n2 % i == 0)
        soma2 = soma2 + i;
    }

    if( soma2 == n1 && soma1 == n2 ){
        return true;
    } else {
        return false;
    }

}