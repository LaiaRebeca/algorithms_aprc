#include <stdio.h>
#include <stdlib.h>

 void somatorioMedia( float a[], int n, float *somatorio, float *media );

 int main( void ) {

    float n[10];
    float s;      // soma
    float m;     // media

// entrada
    for( int i = 0; i < 10; i++ ) {
        printf( "n[%d]: ", i );
        scanf( "%f", &n[i] );
    }

// processamento + saída
    somatorioMedia( n, 10, &s, &m );

    printf( "Somatorio: %.2f\n", s );
    printf( "Media: %.2f\n", m );

    return 0;
 }

void somatorioMedia( float a[], int n, float *somatorio, float *media ) {

    *somatorio = 0;

    for( int i = 0; i < n; i++ ) {
        *somatorio += a[i];
    }

    *media = *somatorio / n;
}