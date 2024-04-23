# include <stdio.h>
# include <stdlib.h>

int main ( void ){
    
        int numero;
        int i;
        
        printf( "Forneca um numero maior ou igual a zero: " );
        scanf( "%d", &numero );

        if( numero < 0 ){
            printf ( "Valor incorreto (negativo) ");
                
        } else {
            for ( i = 0; i <= numero; i++){
            printf( "%d ", i  );
            }
        }
        
    return 0;
}