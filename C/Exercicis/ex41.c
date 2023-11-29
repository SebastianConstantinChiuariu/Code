#include <stdio.h>
char nom[30];
main(){
	
	printf("Insereix el teu nom: ");
	fgets(nom,sizeof(nom),stdin);
	printf("Hola %s",nom);
	system("pause");
}
