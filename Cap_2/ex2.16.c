# include <stdio.h>
# include <stdlib.h>

int main( void ){
    int memoriaNum;
    int num;
    int unidade;
    int dezena;
    int centena;
    int milhar;

// entrada
   printf( "Entre com um numero entre 1 e 3999: " );
   scanf( "%d", &num );

// memoria
    memoriaNum = num;

// variantes fora do intervalo
    if( num < 1 || num > 3999 ){
        printf( "Numero incorreto!" );
    } else {
        milhar = num / 1000;
        num = num % 1000;
        centena = num / 100;
        num = num % 100;
        dezena = num / 10;
        unidade = num % 10;
    
// saida    
        printf( " %d = ", memoriaNum );
// milhar
        if ( milhar == 1 ){
            printf( "M" );
        } else if ( milhar == 2 ){
            printf( "MM" );
        } else if ( milhar == 3 ){
            printf( "MMM" );
        }
// centena
        if ( centena == 1 ){
            printf( "C" );
        } else if ( centena == 2 ){
            printf( "CC" );
        } else if ( centena == 3 ){
            printf( "CCC" );
        } else if ( centena == 4 ){
            printf( "CD" );
        } else if ( centena == 5 ){
            printf( "D" );
        } else if ( centena == 6 ){
            printf( "DC" );
        } else if ( centena == 7 ){
            printf( "DCC" );   
        } else if ( centena == 8 ){
            printf( "DCCC" );            
        } else if ( centena == 9 ){
            printf( "CM" );
        }
// dezena
        if( dezena == 1 ){
            printf( "X" );
        } else if ( dezena == 2 ){
            printf( "XX" );
        } else if ( dezena == 3 ){
            printf( "XXX" ); 
        } else if ( dezena == 4 ){
            printf( "XL" );
        } else if ( dezena == 5 ){
            printf( "L" );            
        } else if ( dezena == 6 ){
            printf( "LX" );
        } else if ( dezena == 7 ){
            printf( "LXX");
        } else if ( dezena == 8 ){
            printf( "LXX" );
        } else if ( dezena == 9 ){
            printf( "XC" );
        }
// unidade
        if( unidade == 1 ){
            printf( "I" );
        } else if ( unidade == 2 ){
            printf( "II" );
        } else if ( unidade == 3){
            printf( "III" );
        } else if ( unidade == 4 ){
            printf( "IV" );
        } else if ( unidade == 5 ){
            printf( "V" );            
        } else  if ( unidade == 6 ){
            printf( "VI" );            
        } else if ( unidade == 7 ){
            printf( "VII" );            
        } else if ( unidade == 8 ){
            printf( "VIII" );
        } else if ( unidade == 9 ){
            printf( "IX" );
        }
    }
    

    return 0;
}