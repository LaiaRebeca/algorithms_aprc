# include <stdio.h>
# include <stdlib.h>

int  main( void ){
        float lado1;
        float lado2;
        float lado3;

// entrada
        printf( "a: " );
        scanf( "%f", &lado1 );

        printf( "b: " );
        scanf( "%f", &lado2 );

        printf( "c: " );
        scanf( "%f", &lado3 );

// saida
        if ( lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2 ){
            
            if ( lado1 == lado2 && lado2 == lado3 ){
            printf( "Triangulo EQUILATERO\n" );

            } else if ( lado1 == lado2 || lado2 == lado3 || lado3 == lado1){
            printf( "Triangulo ISOSCELES\n" );

            } else if ( lado1 != lado2 || lado2 != lado3 || lado3 != lado1 ){
            printf( "Triangulo ESCALENO\n" );

            }

        } else {
            printf( "As medidas fornecidas dos lados nao representam um triangulo valido!\n");
        }

         return 0;
}