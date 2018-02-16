#include <stdio.h>
#include <stdlib.h>

int main (){

    int segundos, dia, hr, min, seg,hr2;
    puts("Ingresa los segundos");
    scanf("%d", &segundos);
    dia = segundos/86400;
    
    hr = segundos/(3600);

    hr2 = segundos%3600;
    
    min = (hr2%60);
   
    seg = (segundos%60);

    printf("%d : %d : %d : %d",dia,hr,min,seg);




}