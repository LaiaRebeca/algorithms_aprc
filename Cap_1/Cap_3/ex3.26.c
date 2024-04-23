# include <stdio.h>
# include <stdlib.h>

int main( void ){
    
    int valor;
    int qtdValor = 0;
    int menor = 0;
    int maior = 0;

    do{
        printf( "Entre com um valor: " );
        scanf( "%d", &valor );

        if (valor >= 0 ){       
            if ( qtdValor == 0 ){
                menor =  valor;
            }

            if ( valor > maior ){
                maior = valor;
            } 
            
            if(valor < menor ){
                menor = valor;
            }

        qtdValor++;

        } else {
        printf( "Menor numero: %d\n", menor );
        printf( "Maior numero: %d\n", maior );
        }

    } while ( valor >= 0 );

    return 0;
}