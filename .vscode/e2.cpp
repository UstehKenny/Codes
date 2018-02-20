#include<stdio.h>
#include<stdlib.h>


int main (){
	int numero;
	printf("Introduce un numero");
	scanf("%d", &numero);
	printf("\n Número invertido: ");
	do{
		printf("%d",numero%10);
		numero/=10;
	}while(numero != 0);
	
	
	
	return 0;
}

