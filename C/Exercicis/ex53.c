#include <stdio.h>
#include <string.h>

int i;
char barresbaixes[9999],cadena[9999];

int main(){

    printf("Introdueix una cadena: ");
    fgets(cadena,sizeof(cadena),stdin);
    strtok(cadena,"\n");
    for (i=0;i<strlen(cadena);i++){
        barresbaixes[i]='_';
    }
    for (i=0;i<strlen(cadena);i++) {
        printf("%c ",barresbaixes[i]);
    }

}