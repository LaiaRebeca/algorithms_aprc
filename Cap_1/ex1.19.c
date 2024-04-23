#include <stdio.h>
#include <stdlib.h>

int main( void ){
        float diametro;
        float circuferencia;
        float area;
        float raio;
        float Pi = 3.141592;

        printf( "Valor do raio do circulo: " );
        scanf( "%f", &raio );

        diametro = 2 * raio;
        circuferencia = 2 * 3.141592 * raio;
        area = 3.141592 * raio * raio;
        
        printf( " Diametro = %.2f \n", diametro );
        printf( " Circuferencia = %.2f \n", circuferencia );
        printf( " Area = %.2f \n", area );

        return 0;


}