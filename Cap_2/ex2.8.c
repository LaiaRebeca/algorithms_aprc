#include <stdio.h>
#include <stdlib.h>

int main( void ){
        float numero1;
        float numero2;
        float numero3;
        float soma;

// entrada
        printf( "N1: ");
        scanf( "%f", & numero1);
        printf( "N2: ");
        scanf( "%f", & numero2);
        printf( "N3: ");
        scanf( "%f", & numero3);

// saida
        if( numero1 >= numero2 && numero2 >= numero3 ) {
            soma = numero1 + numero2;
            printf( "A soma dos dois numeros maiores fornecidos e %.2f", soma );

            } else if( numero1 >= numero3 && numero3 >= numero2 ){
                soma = numero1 + numero3;
                printf( "A soma dos dois numeros maiores fornecidos e %.2f", soma );

            } else if ( numero2 >= numero1 && numero1 >= numero3 ){ 
                soma = numero2 + numero1;
               printf( "A soma dos dois numeros maiores fornecidos e %.2f", soma );

            } else if ( numero2 >= numero3 && numero3 >= numero1 ){ 
                soma = numero2 + numero3;
               printf( "A soma dos dois numeros maiores fornecidos e %.2f", soma );

            } else { 
                soma = numero3 + numero1;
               printf( "A soma dos dois numeros maiores fornecidos e %.2f", soma );   
        }
        
        return 0;
}