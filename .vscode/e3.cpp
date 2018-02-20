#include<stdio.h>
#include<stdlib.h>


int main (){
	int numero,s,s1;
	printf("Introduce un numero");
	scanf("%d", &numero);
	s1=0;
	while(numero != 0){
		s=numero%10;
		numero=numero/10;
		s1=s1+s;
	}
	printf("\n La suma es: %d",s1);
	
	
	return 0;
}

