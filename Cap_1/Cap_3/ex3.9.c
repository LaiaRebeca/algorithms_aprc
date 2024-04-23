# include <stdio.h>
# include <stdlib.h>

int main( void ){
    
    int num;
    int resultado;
    
    printf( "Tabuada do Numero: " );
    scanf( "%d", &num );

    for( int i = 0; i <= 10; i++ ){
        resultado = i * num;
        printf( "%d x %d = %d\n", num, i, resultado );
    }
    return 0;
}