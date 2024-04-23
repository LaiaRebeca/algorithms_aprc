# include <stdio.h>
# include <stdlib.h>

int main( void ){
    
    float soma = 0;
    float media;
    float qtdValor = 0;
    float valor;

    do{
        printf( "Entre com um valor: " );
        scanf( "%f", &valor );

        if(valor >= 0){
            qtdValor++;
            soma = soma + valor;
        } 
        
        if (qtdValor > 0){
            media = soma / qtdValor;
            
        }

    } while (valor >= 0 );

    printf( "Somatorio: %.2f\n", soma );
    printf( "Media: %.2f\n", media );
    printf( "Quantidade: %.f\n", qtdValor );

    return 0;
}