# include <stdio.h>
# include <stdlib.h>

int main( void ){

    int num1;
    int num2;
    int mult2 = 0;
    int mult3 = 0;
    int mult4 = 0;

    printf("N1: " );
    scanf( "%d", &num1 );
    printf("N2: " );
    scanf( "%d", &num2 );

    if( num1 < num2 ){
    
    for( int i = num1; i <= num2; i++ ){

        if( i % 2 == 0 ){
            mult2++;
        }

        if( i % 3 == 0 ){
            mult3++;
        }

        if( i % 4 == 0 ){
            mult4++;
        }
    }

    printf( "Multiplos de 2: %d\n", mult2 );
    printf( "Multiplos de 3: %d\n", mult3 );
    printf( "Multiplos de 4: %d\n", mult4 );

    } else if ( num1 > num2 ){
           for( int i = num2; i <= num1; i++ ){

        if( i % 2 == 0 ){
            mult2++;
        }

        if( i % 3 == 0 ){
            mult3++;
        }
        
        if( i % 4 == 0 ){
            mult4++;
        }
    }

    printf( "Multiplos de 2: %d\n", mult2 );
    printf( "Multiplos de 3: %d\n", mult3 );
    printf( "Multiplos de 4: %d\n", mult4 );
    
    }

    return 0;
}