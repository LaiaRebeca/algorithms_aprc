# include <stdio.h>
# include <stdlib.h>

int main( void ){
    float p;
    float h;
    float imc;

// entrada
    printf( "Entre com o seu peso em quilogramas: " );
    scanf( "%f", &p );

    printf( "Entre com sua altura em metros: " );
    scanf( "%f", &h );

// saida
    imc = (p) / (h * h);

    printf( "IMC: %.2f\n", imc );

    if ( imc < 17){
        printf( "Voce esta muito abaixo do peso ideal!");

    } else if ( 17 <= imc && imc < 18.5 ){
        printf ( "Voce esta abaixo do peso ideal!" );

    } else if ( 18.5 <= imc && imc < 25 ){
        printf( "Parabens! Voce esta em seu peso normal!");

    } else if ( 25 <= imc && imc < 30 ){
        printf( "Atencao, voce esta acima de seu peso (sobrepeso)!" );

    } else if ( 30 <= imc && imc < 35 ){
        printf( "Cuidado! Obesidade grau I!" );

    } else if ( 35 <= imc && imc < 40 ){
        printf( "Cuidado! Obesidade grau II!" );    

    } else {
        ( imc >= 40 );
        printf( "Muito cuidado!!! Obesidade grau III" );
    }
    

    return 0;
}