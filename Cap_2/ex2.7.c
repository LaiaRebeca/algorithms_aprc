#include <stdio.h>
#include <stdlib.h>

int main( void ){
        float numero1;
        float numero2;
        float soma;
        float subtracao;
    
// entrada    
        printf( "Entre com um numero: ");
        scanf( "%f", &numero1 );
        printf( "Entre com outro numero: ");
        scanf( "%f", &numero2 );

//saida
        if ( numero1 + numero2 > 10 ){
            soma = numero1 + numero2;
            printf( "Os numeros fornecidos foram %.2f e %.2f", numero1, numero2);

        } else {
            subtracao = numero1 - numero2;
            printf( "A subtracao entre %.2f e %.2f e igual a %.2f", numero1, numero2, subtracao );

        }
        
        return 0;
}