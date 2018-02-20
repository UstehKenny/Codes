#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,suma,c;
    float res;
    c = 0;
    suma = 0;
    
    do{
        printf("Ingresa un número: \n");
        scanf("%d",&n);
        if (n == 0)
            continue;
        c = c + 1;       
        suma = suma + n;
        res = (float)suma /(float)c;
    }while(n != 0);

    
    printf("\nPromedio: %f",res);



    return EXIT_SUCCESS;
}