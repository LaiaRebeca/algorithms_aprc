#include <stdio.h>
#include <stdlib.h>

int main ( void ){
        int b;
        int h;
        int a;

        printf("Valor da base: ");
        scanf("%d", &b);
        printf("Valor da altura: ");
        scanf("%d", &h);

        a = b * h / 2;

        printf("Area = %d\n", a );

        return 0;
}