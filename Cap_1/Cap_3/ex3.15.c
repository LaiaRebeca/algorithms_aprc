# include <stdio.h>
# include <stdlib.h>

int main( void ){
    
    int num;
    int fatorial = 1;

    printf( "Numero: " );
    scanf( "%d", &num );

    if( num < 0 ){
        printf( "Nao ha fatorial de numero negativo." );
        
    } else {
        for ( int i = fatorial; i <= num; i++ ){
            fatorial *= i;
        }
        printf( "%d! = %d", num, fatorial );
    } 

    return 0;
}