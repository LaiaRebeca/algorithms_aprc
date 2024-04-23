#include <stdio.h>
#include <stdlib.h>

int main( void ){
        int numero;
        int ant;
        int suc;

        printf( "Forneca um numero inteiro:" );
        scanf( "%d", &numero );

        suc = numero +1;
        ant = numero -1;
        
        printf( "Sucessor de 1992: %d\n", suc );
        printf( "Antecessor de 1992: %d\n", ant);

        return 0;
}