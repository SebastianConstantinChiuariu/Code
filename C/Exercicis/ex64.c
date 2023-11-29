#include <stdio.h>

main(){
	char cadena[15];
	printf("Introdueix una paraula: ");
	fgets(cadena,sizeof(cadena),stdin);
	int interi;
	printf("Introdueix una nombre: ");
	scanf("%d",&interi);
	lletrax(cadena,interi);
}

int lletrax(char paraula[15], int nombre){
	printf("%c",paraula[nombre-1]);	
}

