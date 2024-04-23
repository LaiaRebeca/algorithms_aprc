#include <stdio.h>
#include <stdlib.h>

int main( void ){
        float valor;
        float desconto;

        printf( "Valor do produto: ");
        scanf( "%f", &valor );

        desconto = valor * 0.91 ;

        printf( "Preco de venda com 9%% de desconto: %.2f\n", desconto);
        
        return 0;
}