# include <stdio.h>
# include <stdlib.h>

int main( void ){
    
    int termo1 = 0;
    int termo2 = 1;
    int termo;
    int n = 20;

    printf( "%d", termo2 );

    for( int i = 1; i < n; i++ ){
        termo = termo1 + termo2;
        printf( " %d", termo );
        termo1 = termo2;
        termo2 = termo;
    }

    return 0;

}