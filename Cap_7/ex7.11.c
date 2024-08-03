#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool numeroCorreto( int n );
int obtemDigito( int n );
int obtemNumero( int n );
int calculaDigito( int n );

int main( void ){

    int num;

// entrada
    printf( "Numero: " );
    scanf( "%d", &num );

// saída
    if( num >= 10 && num <= 99999 ){
        printf( "Numero completo: %d\n", num );
        printf( "Numero: %d\n", obtemNumero( num ));
        printf( "Digito: %d\n", obtemDigito( num ));
        printf( "Digito calculado: %d\n", calculaDigito( obtemNumero( num )));
        printf( "O numero fornecido esta " );

        if( numeroCorreto( num )){
            printf( "correto!" );
        } else {
            printf( "incorreto!" );
        }
    }
    return 0;
}

// processamento
bool numeroCorreto( int n ){

    if( obtemDigito(n) == calculaDigito(obtemNumero(n))){
        return true;

    } else {
        return false;
    }
}

int obtemDigito ( int n ){

    return n % 10;
}

int obtemNumero( int n ){

    return n / 10;
}

int calculaDigito( int n ){

    int peso = 2;
    int soma = 0;
    int resto;
    int algarismo;
    int digitoV = 0;

    while ( n > 0 ){
        algarismo = n % 10;
        soma += algarismo * peso;
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