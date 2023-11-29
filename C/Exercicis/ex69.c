#include <stdio.h>

FILE *fitxer;
int numero;

main(){
    printf("Insereix un nombre: ");
    fscanf(fitxer,"%d", &numero);
    if((fitxer=open("/home/cicles/fitxer","r"))==NULL){
        printf("ERROR: El archivo no se puede abrir");
    }
}