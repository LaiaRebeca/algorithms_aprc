# include <stdio.h>
# include <stdlib.h>

int main( void ){
    
    float soma;
    float nota;
    float media;
    int variavel;
    
    printf( "Forneca a nota de 10 alunos: \n" );

    for( int i = 1; i <= 10; i++ ){
        variavel++;
        printf( "Nota %02d: ", i );
        scanf( "%f", &nota );

        soma = soma + nota;
    }

    media = soma /10;

    printf( "A media aritmetica das dez notas e: %.2f ", media );

    return 0;
}