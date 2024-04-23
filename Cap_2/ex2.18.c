# include <stdio.h>
# include <stdlib.h>

int main( void ){
        float n1;
        float n2;
        float res;
        char opcao;
// entrada
        printf( "N1: " );
        scanf( "%f", &n1 );
        printf( "N2: " );
        scanf(" %f", &n2 );
// operacoes
        printf( "Escolha uma operacao de acordo com o menu:\n" );
        printf( "    +) Adicao;\n" );
        printf( "    -) Subtracao;\n");
        printf( "    *) Multiplicacao;\n" );
        printf( "    /) Divisao.\n" );
        scanf( " %c", &opcao );
// saida
        switch (opcao){
                case '+':
                        res = n1 + n2;
                        printf( "%.2f + %.2f = %.2f", n1, n2, res );
                        break;
                case '-':
                        res = n1 - n2;
                        printf( "%.2f - %.2f = %.2f", n1, n2, res );
                        break;
                case '*':
                        res = n1 * n2;
                        printf( "%.2f * %.2f = %.2f", n1, n2, res );
                        break;
                case '/':
                        res = n1 / n2;
                        printf( "%.2f / %.2f = %.2f", n1, n2, res);
                        break;
                default:
                        printf( "Opcao invalida!" );
                        break;
        }

     return 0;
}