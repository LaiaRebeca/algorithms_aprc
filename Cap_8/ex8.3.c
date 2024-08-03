#include <stdio.h>
#include <stdlib.h>

void decompoeTempo( int totalSeg, int *horas, int *minutos, int *seg );

int main( void ) {

    int totalSeg;
    int h;
    int min;
    int seg;

// entrada
    printf( "Total de segundos: " );
    scanf( "%d", &totalSeg );

// processamento + saída
    decompoeTempo( totalSeg, &h, &min, &seg );

    printf( "%d segundo(s) corresponde(m) a:\n", totalSeg );
    printf( "    %d hora(s)\n", h );
    printf( "    %d minuto(s)\n", min );
    printf( "    %d segundo(s)\n", seg );

    return 0;
}

void decompoeTempo( int totalSeg, int *horas, int *minutos, int *seg ) {

    *horas = totalSeg / 3600;
    totalSeg %= 3600;
    *minutos = totalSeg / 60;
    *seg = totalSeg % 60;
}