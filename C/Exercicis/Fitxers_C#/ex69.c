#include <stdio.h>
FILE *file;
int numero;
char cadena[200];
main(){
    if((file=fopen("filecd","w"))==NULL){
        printf("El fitxer no s'ha pogit obrir");
    }
    else{
        scanf("%d",&numero);
        fflush(stdin);
        fgets(cadena,sizeof(cadena),stdin);
        fprintf(filecd,"%d",numero);
        fprintf(filecd,"%s",cadena);
        fclose(filecd);
    }   
}
