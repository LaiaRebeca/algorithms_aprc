#include <stdio.h>
#include <stdlib.h>

int calculaDigito( int n );

int main( void ){

    int num;

// entrada
    printf( "Numero: " );
    scanf( "%d", &num );

// saída
    if( num >= 1 && num < 9999 ){
        printf( "Digito verificador de %d: %d", num, calculaDigito(num) );
    }

    return 0;
}

// processamento
int calculaDigito( int n ){

    int peso = 2;
    int soma = 0;
    int resto;
    int algarismo;
    int digitoV = 0;

    while ( n > 0 ){
        algarismo = n % 10;
        soma += (algarismo * peso);
        peso++;
        n /= 10;
    }

    resto = soma % 11;
    digitoV = 11 - resto;

    if( digitoV == 10 || digitoV == 11 ){
        digitoV = 0;
    }

    return digitoV;
}