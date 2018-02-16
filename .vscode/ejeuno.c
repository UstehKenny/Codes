#include <stdio.h>
#include <stdlib.h>

int main(){


    int dias, horas, minutos, segundos, resultante;

    puts("Ingresa los días, horas, minutos y segundos");
    scanf("%d%d%d%d", &dias, &horas, &minutos, &segundos);
    resultante= (dias*86400)+(horas*3600)+(minutos*60)+(segundos);


    printf("%d",resultante);



    return EXIT_SUCCESS;
}