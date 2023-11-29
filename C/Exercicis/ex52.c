#include <stdio.h>

int i,num;
char barresbaixes[9999];

int main(){

    printf("Introdueix un numero: ");
    scanf("%d",&num);
    for (i=0;i<num;i++){
        barresbaixes[i]='_';
    }
    for (i=0;i<num;i++) {
        printf("%c ",barresbaixes[i]);
    }

}