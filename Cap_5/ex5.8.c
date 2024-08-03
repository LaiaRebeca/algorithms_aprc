# include <stdio.h>
# include <stdlib.h>

int main( void ){

// variaveis
    int array[100][100];
    int num;

// entrada
    printf( "Numero entre 1 e 100: " );
    scanf( "%d", &num );

// processamento + saída
    if( num < 1 || num > 100 ){
        printf( "Numero incorreto!"); 
        
    } else {
        int vezes = ( num + 1 ) / 2;

        for( int k = 0; k < vezes; k++ ){

            for( int i = k; i < num - k; i++ ){
                for( int j = k; j < num - k; j++ ){
                    array[i][j]++;
                }
            }
        }
        

        for( int i = 0; i < num; i++ ){
            for( int j = 0; j < num; j++ ){
                if( j == num - 1){
                printf( "%3d\n", array[i][j] );
                
                } else {
                    printf( "%3d ", array[i][j] );
                }
            }
        }
    }
  

    return 0;
}