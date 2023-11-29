#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int cantidad,x=0,a,b,e;
int aleatorio[5];
main(){
    srand(time(NULL));
    cantidad=0;
    do{
        x++;
        cantidad++;
        aleatorio[x]=rand()%10;
        for(a=0;a<4;a++){
            for(b=0;b<4;b++){
                if(a!=b && aleatorio[a]==aleatorio[b]){
                    x--;
                    cantidad--;
                }
            }
        }
    }while(cantidad==4);
    for(e=0;e<4;e++){
        
        printf("%d",aleatorio[e]);
    }
}