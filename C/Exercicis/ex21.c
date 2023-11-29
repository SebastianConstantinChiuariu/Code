#include <stdio.h>
int resp;

main(){
	printf("Que t'agrada m�s: 1-Platja, 2-Muntanya, 3-Ciutat: ");
	scanf("%d",&resp);
	
	if (resp == 1){
		printf("\n Aixi que t'agrada la Platja :)\n");
	}
	
	if (resp == 2){
		printf("\n Aixi que t'agrada la Muntanya :)\n");
	} 
	if (resp == 3){
		printf("\n Aixi que t'agrada la Ciutat :)\n");
	} else {
		printf("Numero no valid\n");
	}
	system("pause");
	
}
