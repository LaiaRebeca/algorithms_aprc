#include <stdio.h>
#include <stdlib.h>

void trocar( int *n1, int *n2 );

int main( void ) {
    
    int a;
    int b;

// entrada
    printf( "n1: " );
    scanf( "%d", &a );

    printf( "n2: " );
    scanf( "%d", &b );

// processamento + saída
    printf( " Antes:\n" );
    printf( "    n1: %d\n", a );
    printf( "    n2: %d\n", b );

    trocar( &a, &b );

    printf( "Depois:\n" );
    printf( "    n1: %d\n", a );
    printf( "    n2: %d\n", b );

    return 0;
}

void trocar( int *n1, int *n2 ) {

    int temp;

    temp = *n1;
    *n1 = * n2;
    *n2 = temp;

 }