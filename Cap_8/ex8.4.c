#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void decompoeData( int diaDoAno, int ano, int *mes, int *dia );
bool ehBissexto( int ano );

int main( void ) {

    int diaA;    // dia do ano
    int a;      // ano
    int m;     // mes
    int d;    //dia

// entrada
    printf( "Dia do ano: " );
    scanf( "%d", &diaA );

    printf( "Ano: " );
    scanf( "%d", &a );

// processamento + saída
    decompoeData( diaA, a, &m, &d );

    printf( "O dia %d do ano %d cai no dia %d do mes %d.\n", diaA, a, d, m );

    return 0;
}

void decompoeData( int diaDoAno, int ano, int *mes, int *dia ) {

    int diaMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if( ehBissexto( ano )){
        diaMes[1] = 29;
    }

    *mes = 0;

    while( diaDoAno > diaMes[ *mes ] ) {
        diaDoAno -= diaMes[ *mes ];
        (*mes)++;
    }

    (*mes)++;
    *dia = diaDoAno;
}

bool ehBissexto( int ano ) {

    if( ano % 4 == 0 ) {
        return true;
    } else {
        return false;
    }

}