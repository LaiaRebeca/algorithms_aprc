# include <stdio.h>
# include <stdlib.h>

int main( void ){
    
    int num1;
    int num2;
    int soma;
    
    printf( "N1: " );
    scanf( "%d", &num1 );
    printf( "N2: " );
    scanf( "%d", &num2 );

    if( num1 < num2 ){
        for( int i = num1; i <= num2; i++ ){
            if( i % 2 == 0 ){
                soma++;
            }
        }
        printf( "Numeros pares entre %d e %d: %d ", num1, num2, soma );

    } else if (num2 < num1 ){
        for( int i = num2; i <= num1; i++ ){
            if( i % 2 == 0 ){
                soma++;
            }
        }
        printf( "Numeros pares entre %d e %d: %d ", num2, num1, soma );
    }
    
    return 0;
}