#include <stdio.h>

FILE *fitxer;
FILE *fitxermult;
int numero,fnumero;

main(){

    if((fitxermult=fopen("/home/cicles/file*","w"))==NULL){
        printf("ERROR: El archivo no se puede abrir");
    }
    if((fitxer=fopen("/home/cicles/file","w"))==NULL){
        printf("ERROR: El archivo no se puede abrir");
    }
    else{
        scanf("%d",&numero);
        fprintf(fitxer,"Numero: %d",numero);
        fscanf(fitxer,"Llegits: %d",numero);
        numero=numero*2;
        fprintf(fitxermult,"Nombre fitxer*2: %d",numero);      
    }
    
    
    



}