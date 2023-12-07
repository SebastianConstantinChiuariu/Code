#include <stdio.h>

FILE *file;
char caracter,arxiu[30];

main(){

	fgets(arxiu,sizeof(arxiu),stdin);
	strtok(arxiu,"\n");
	
	if((file=fopen(arxiu,"r"))==NULL){
		printf("ERROR: No es pot obrir");
	}
	
	else{
		while(!feof(file)){
			caracter=fgetc(file); 
			printf("%c",caracter);
		fclose(file);
		}
	}
}
