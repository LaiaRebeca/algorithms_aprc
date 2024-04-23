# include <stdio.h>
# include <stdlib.h>

int main( void ){
        float nota1;
        float nota2;
        float notaOptativa;
        float media;

// entrada
        printf( "Nota Av. 1: " );
        scanf( "%f", &nota1 );

        printf( "Nota Av. 2: " );
        scanf( "%f", &nota2 );

        printf( "Nota Optativa: " );
        scanf( "%f", &notaOptativa );

// saída
        
        if( notaOptativa >= 0 ){
            if(notaOptativa >= nota1){
                nota1 = notaOptativa;

            } else if (notaOptativa >= nota2){
                nota2 = notaOptativa;
            }
        }
            media = ( nota1 + nota2 ) / 2;
            if ( media >= 6 ){
            printf( "Media: %.2f\n", media );
            printf( "Aprovado!");

            } else if ( 4 <= media && media < 6 ){
            printf( "Media: %.2f\n", media );
            printf( "Exame.");

            } else {
            ( media < 4 );
            printf( "Media: %.2f\n", media );
            printf( "Reprovado...");

            }

    return 0;
}