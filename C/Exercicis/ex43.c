#include <stdio.h>

char secret [15]= "endavant";
char input[100];


main(){
	do{
		printf("Escriu la paraula secreta per obrir la porta: ");
		fgets(input, sizeof(input),stdin);
		strtok(input,"\n");
		if (strcmp(input,secret)==0){
			printf("Porta oberta");
		}
		else{
			printf("torna a provar");
		}
	}	while(strcmp(input,secret)!=0);
	
	system("pause");
}

