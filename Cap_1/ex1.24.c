#include <stdio.h>
#include <stdlib.h>

int main( void ){
        float liq;
        float hora;
        float qtd;
        float inss;
        float salario;
        float desconto;

        printf( "Valor da hora/aula: " );
        scanf( "%f", &hora );
        printf( "Quantidade de aulas: " );
        scanf( "%f", &qtd );
        printf( "Porcentagem de desconto do INSS: ");
        scanf ( "%f", &inss);

        salario = hora * qtd;
        desconto = salario * inss/100;

        printf( "Salario Liquido: %.2f\n", salario - desconto);

        return 0;

}