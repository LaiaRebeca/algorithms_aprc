# include <stdio.h>
# include <stdlib.h>

int main( void ){
    
    int num;
    
    printf( "Forneca um numero menor ou igual a zero: " );
    scanf( "%d", &num );

    if( num > 0 ){
        printf( "Valor incorreto (positivo)" );

    } else {
        for( int i = 0; num <= i;  i-- ){
            printf( "%d ", i );
        }
    }
    return 0;
}