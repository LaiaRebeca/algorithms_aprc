# include <stdio.h>
# include <stdlib.h>

int lePositivo( void );
int somatorio( int n );

int main( void ){

    int n[5];

// entrada
    for( int i = 0; i < 5; i++ ){
        printf( "n[%d]: ", i );
        n[i] = lePositivo();
    }

// saída
    for( int i = 0; i < 5; i++ ){
        printf( "Somatorio de 1 a %d: %d\n", n[i], somatorio( n[i]) );
    }

    return 0;

}

// processamento
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

int somatorio( int n ){

    int soma = 0;

    for( int i = 0; i <= n; i++ ){
        soma = soma + i;
    }

    return soma;
}