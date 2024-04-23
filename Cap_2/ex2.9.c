# include <stdio.h>
# include <stdlib.h>

int main( void ){
        float qtdLado;
        float medidaL;
        float triangulo;
        float quadrado;
        float pentagono;
        float area;

// entrada
        printf( "Entre com a quantidade de lados: ");
        scanf( "%f", &qtdLado);

        printf( "Entre com a medida do lado: ");
        scanf( "%f", &medidaL);

// saida
        if ( qtdLado == 3){
                printf( "TRIANGULO de perimetro %.2f\n", qtdLado * medidaL );

        } else if ( qtdLado == 4 ){
                area = medidaL * medidaL;
                printf( "QUADRADO de area %.2f\n", area);
                      
        } else if ( qtdLado == 5 ){
                printf( "PENTAGONO\n" );
                
        } else {
                printf( "Poligono nao identificado\n");
        }
        
        return 0;
        
}