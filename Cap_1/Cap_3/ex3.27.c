# include <stdio.h>
# include <stdlib.h>

int main( void ){

    float peso;
    float media;
    float soma = 0;
    float maior = 0;
    int pessoa = 1;
    int pesoPessoa = 0;

    do{
        printf( "Entre com o peso da pessoa %02d: ", pessoa );
        scanf( "%f", &peso );

        if( peso > maior ) {
            maior = peso;
        }

        if( peso > 60 ) {
            soma = soma + peso;
            pesoPessoa++;
        }
        pessoa++;

    } while( peso >= 0 );

        if( pesoPessoa > 0 ) {
            media = soma / pesoPessoa;
        }
    
    printf( "Media dos pesos acima de 60kg: %.2f\n", media );
    printf( "A pessoa mais pesada possui %.2fkg\n", maior );


    return 0;
}