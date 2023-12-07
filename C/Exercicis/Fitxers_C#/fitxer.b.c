#include <stdio.h>

FILE *fitxer;
int numero,fnumero;

main(){

    if((fitxer=fopen("/home/cicles/file","w"))==NULL){
        printf("ERROR: El archivo no se puede abrir");
    }
    else{
        scanf("%d",&numero);
        fprintf(fitxer,"Numero: %d",numero);
    }
}