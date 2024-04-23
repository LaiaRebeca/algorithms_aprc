#include <stdio.h>
#include <stdlib.h>

int main( void ){
        int D;
        int d;
        int a;

        printf("Valor da diagonal maior: ");
        scanf("%d", &D);
        printf("Valor da diagonal menor: ");
        scanf("%d", &d);

        a = D * d / 2;

        printf("Area = %d\n", a);

        return 0;
}