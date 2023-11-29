#include <stdio.h>
int casos,x,i,m,vacio,loop=1,relleno;
main(){
    scanf("%d",&casos);
    for(x=0;x<casos;x++){
        scanf("%d",&i);
        scanf("%d",&m);
        while (loop!=0){
            scanf("%d",&vacio);
            if(vacio==-1)
            loop=0;
        }
        printf("%d",vacio);
        
    }
}