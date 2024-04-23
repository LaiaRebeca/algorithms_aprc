#include <stdio.h>
#include <stdlib.h>

int main( void ){
        int nascimento;
        int atual;
        int idade;

        printf( "Ano de nascimento:" );
        scanf( "%d", &nascimento );
        printf( "Ano atual:" );
        scanf( "%d", &atual );

        idade = atual - nascimento;

        printf( "Idade aproximada: %d anos \n", idade );

        return 0;
}