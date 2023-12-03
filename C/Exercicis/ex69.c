#include <stdio.h>
FILE *filecd;
int numero;
char cadena[50];
main(){
    if((filecd=fopen("/home/cicles/filecd","w"))==NULL){
        printf("El fitxer no s'ha pogit obrir");
    }
    else{
        scanf("%d",&numero);
        printf("Texte: ");
        fflush(stdin);
        fgets(cadena,sizeof(cadena),stdin);
        fprintf(filecd,"Numeros: %d",numero);
        fprintf(filecd,"Text: %s",cadena);
    }   
}