#include <stdio.h>
#include <stdlib.h>

void pInterno( const double *a1, const double *a2, double *pi, int n );

int main( void ) {

    double array1[5];
    double array2[5];
    double produtoI[5];

// entrada
    for( int i = 0; i < 5; i++ ) {
        printf( "a1[%d]: ", i );
        scanf( "%lf", &array1[i] );
    }

    for( int i = 0; i < 5; i++ ) {
        printf( "a2[%d]: ", i );
        scanf( "%lf", &array2[i] );
    }

// processamento + saída
    pInterno( array1, array2, produtoI, 5 );

    for( int i = 0; i < 5; i++ ) {
        printf( "%.2f x %.2f = %.2f\n", array1[i], array2[i], produtoI[i]);
    }

    return 0;
}

void pInterno( const double *a1, const double *a2, double *pi, int n ) {

    for( int i = 0; i < n; i++ ) {
        pi[i] = a1[i] * a2[i];
    }
}