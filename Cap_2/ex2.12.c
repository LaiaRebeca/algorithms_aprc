# include <stdio.h>
# include <stdlib.h>

int main ( void ){
    int h1;
    int h2;
    int m1;
    int m2;
    int result1;
    int result2;

// entrada
    printf( "Idade Homem 1: " );
    scanf( "%d", &h1 );

    printf( "Idade Homem 2: " );
    scanf( "%d", &h2 );

    printf( "Idade Mulher 1: ");
    scanf( "%d", &m1 );

    printf( "Idade Mulher 2: " );
    scanf( "%d", &m2);

// saída
    if( h1 >= h2 && m1 >= m2 ){
        result1 = h1 + m2;
        result2 = h2 * m1;
        printf( "Idade homem mais velho + idade mulher mais nova: %d\n", result1 );
        printf( "Idade homem mais novo * idade mulher mais velha: %d\n", result2 );
        
    } else if ( h1 <= h2 && m1 <= m2 ){
        result1 = h2 + m1;
        result2 = h1 * m2;
        printf( "Idade homem mais velho + idade mulher mais nova: %d\n", result1 );
        printf( "Idade homem mais novo * idade mulher mais velha: %d\n", result2 );

    } else if ( h1 >= h2 && m1 <= m2 ){
        result1 = h1 + m1;
        result2 = h2 * m2;
        printf( "Idade homem mais velho + idade mulher mais nova: %d\n", result1 );
        printf( "Idade homem mais novo * idade mulher mais velha: %d\n", result2 );

    } else if ( h1 <= h2 && m1 >= m2 ){
        result1 = h2 + m2;
        result2 = h1 * m1;
        printf( "Idade homem mais velho + idade mulher mais nova: %d\n", result1 );
        printf( "Idade homem mais novo * idade mulher mais velha: %d\n", result2 );
    }

    return 0;
}