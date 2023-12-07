#include <stdio.h>

main(){
	char cadena[15];
	printf("Introdueix una paraula: ");
	fgets(cadena,sizeof(cadena),stdin);
	laterceralletra(cadena);
}

void laterceralletra(char paraula[15]){
	printf("%c\n",paraula[2]);
}
