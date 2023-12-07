#include <stdio.h>

FILE *file;
FILE *filecd;
char cadena[200];
int numero;

main(){
    if((filecd=fopen("filecd","r"))==NULL){
        printf("ERROR: El archivo no se puede abrir");
    }
    else{
    	fscanf(filecd,"%d",&numero);
    	fgets(cadena,199,filecd);
    	printf("filecd int: %d\n",numero);
    	printf("filecd char: %s",cadena);
	}
}
