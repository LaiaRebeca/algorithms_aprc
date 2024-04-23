# include <stdio.h>
# include <stdlib.h>

int main( void ){
    
    float saldo;
    int tipoOperacao;
    float valor;

// entrada
    printf( "Saldo inicial: ");
    scanf( "%f", &saldo );

    printf( "Operacoes:\n " );
    printf( "    1) Deposito;\n " );
    printf( "    2) Saque;\n " );
    printf( "    3) Fim.\n " );

// saida
    do {
        printf( "Operacao desejada: ");
        scanf( "%d", &tipoOperacao );

        switch ( tipoOperacao ){
            case 1:
                printf( "Valor a depositar: " );
                scanf( "%f", &valor );
                saldo += valor;
                break;
            case 2:
                printf( "Valor a sacar: " );
                scanf( "%f", &valor );
                saldo -= valor;
                break;
            case 3:
                break;
            default:
                printf( "Operacao invalida.\n" );
                break;
        }

    } while ( tipoOperacao != 3 );

    printf( "Saldo final: " );
    if ( saldo < 0 ){
        printf( "-" );
    }
    printf( "R$%.2f\n", saldo < 0 ? - saldo : saldo );

    if ( saldo < 0 ){
        printf( "Conta devedora. " );
    } else if ( saldo == 0 ){
        printf( "Sem saldo." );
    } else {
        printf( "Conta preferencial." );
    }

    return 0;
}