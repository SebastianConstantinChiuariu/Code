#include <stdio.h>
#include <string.h>

char paraula[15],lletra;
int hi_es=0,i,x=0;


main(){
	printf("Insereix una paraula: ");
	fgets(paraula,sizeof(paraula),stdin);
	printf("Insereix una lletra: ");
	scanf("%c",&lletra);
	for (i=0;i<strlen(paraula);i++){
		x++;
		if (paraula[i]==lletra){
			hi_es=1;			
			printf("\nLa lletra '%c' es situa a l'espai nombre '%d'",lletra,x);	
		}
	}
	if (hi_es==0){
		printf("la lletra '%c' no es troba dins la paraula",lletra);
	}
	
}
