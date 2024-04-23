# include <stdio.h>
# include <stdlib.h>

int main( void ){

    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    int n;

    printf( "N1: " );
    scanf( "%d", &num1 );
    n = num1;

    printf( "N2: " );
    scanf( "%d", &num2 );
    if( n < num2 ){
        n = num2;
    }

    printf( "N3: " );
    scanf( "%d", &num3 );
    if( n < num3 ){
        n = num3;
    }

    printf( "N4: " );
    scanf( "%d", &num4 );
    if( n < num4 ){
        n = num4;
    }

    printf( "N5: " );
    scanf( "%d", &num5 );
    if( n < num5 ) {
        n = num5;
    }

    if( num1 >= 0 && num2 >= 0 && num3 >= 0 && num4 >= 0 && num5 >= 0){
        for( int i = n ; i >= 1 ; i--){
            printf( "%04d  ", i );

            if( i <= num1 ){
                printf( "*" );
            } else {
                printf( " " );
            }

            if( i <= num2 ){
                printf( "*" );
            } else {
                printf( " " );
            }

            if( i <= num3 ){
                printf( "*" );
            } else {
                printf( " " );
            }

            if( i <= num4 ){
                printf( "*" );
            } else {
                printf( " " );
            }

            if( i <= num5 ){
                printf( "*" );
            } else {
                printf( " " );
            }
            printf( "\n" );
        }

    } else {
        printf( "Forneca apenas numeros positivos." );
    }

    return 0;
}
