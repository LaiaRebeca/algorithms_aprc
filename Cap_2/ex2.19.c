# include <stdio.h>
# include <stdlib.h>

int main( void ){
    float cel;
    float fah;
    char opcao;
// entrada
    printf( "Escolha uma operacao de acordo com o menu:\n " );
    printf( "    C) Celsius -> Fahrenheit;\n" );
    printf( "    F) Fahrenheit -> Celsius.\n" );
    printf( "Opcao: " );
    scanf( " %c", &opcao );

    switch (opcao){
        case 'C':
            printf( "Entre com a temperatura em graus Celsius: " );
            scanf( "%f", &cel );

            fah = (1.8 * cel) + 32;
            printf( "%.2f graus Celsius correspondem a %.2f graus Fahrenheit", cel, fah);
            break;
        case 'F':
            printf( "Entre com a temperatura em Fahrenheit: " );
            scanf( "%f", &fah );

            cel = (fah - 32) / 1.8;
            printf( "%.2f graus Fahrenheit correspondem a %.2f graus Celsius", fah, cel);
            break;
        default:
            printf( "Opcao invalida!" );
            break;

    }
    return 0;
}