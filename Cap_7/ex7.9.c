#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool ehTriangulo( int ladoA, int ladoB, int ladoC );
int tipoTriangulo( int ladoA, int laodB, int ladoC );
int lePositivo( void );

int main( void ){

    int ladoA[5];
    int ladoB[5];
    int ladoC[5];

// entrada
    for( int i = 0; i < 5; i++ ){
        printf( "ladoA[%d]: ", i );
        ladoA[i] = lePositivo();

        printf( "ladoB[%d]: ", i );
        ladoB[i] = lePositivo();

        printf( "ladoC[%d]: ", i );
        ladoC[i] = lePositivo();
    }

// saída
    for( int i = 0; i < 5; i++ ){
        printf( "Valores %d, %d e %d: ", ladoA[i], ladoB[i], ladoC[i] );

        if( tipoTriangulo ( ladoA[i], ladoB[i], ladoC[i] ) == 1 ){
            printf( "triangulo equilatero\n" );

        } else if( tipoTriangulo ( ladoA[i], ladoB[i], ladoC[i] ) == 2 ){
            printf( "triangulo isosceles\n" );

        } else if( tipoTriangulo ( ladoA[i], ladoB[i], ladoC[i] ) == 3 ){
            printf( "triangulo escaleno\n" );

        } else if( tipoTriangulo( ladoA[i], ladoB[i], ladoC[i] ) == 0 ) {
            printf( "nao formam um triangulo\n" );

        } else {
            printf( "\n" );
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
bool ehTriangulo( int ladoA, int ladoB, int ladoC ){

    if( ladoA + ladoB > ladoC || ladoA + ladoC > ladoB || ladoB + ladoC > ladoA ){
        return true;
    } else {
        return false;
    }

}

int tipoTriangulo( int ladoA, int ladoB, int ladoC ){

    if( ladoA + ladoB <= ladoC || ladoA + ladoC <= ladoB || ladoB + ladoC <= ladoA ){
        return 0; // Não triângulo

    } else if ( ladoA == ladoB && ladoB == ladoC ){
        return 1; // Esquilátero

    } else if( ladoA == ladoB || ladoB == ladoC || ladoA == ladoC ){
        return 2; // Isósceles

    } else {
        return 3; // Escaleno
    }
}