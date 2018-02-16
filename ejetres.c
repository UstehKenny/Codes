#include <stdio.h>
#include <stdlib.h> 

int main(){
    int num1, num2;
    float resultado;
    puts("Ingresa dos números");
    scanf("%d%d", &num1, &num2);
    resultado = (float)num1/(float)num2;
    printf("%.2f",resultado);
}