#include <stdio.h>

int casos,totalpisos,escalones,llavescaidas,escalonesdemas,x,total1,total2;
main(){
    scanf("%d",&casos);
    for(x=0;x<casos;x++){
        scanf("%d %d %d %d",&totalpisos,&escalones,&llavescaidas,&escalonesdemas);
        total2=llavescaidas*escalones+escalonesdemas;
        total1=totalpisos*escalones+total2;
        printf("%d %d\n",total2,total1);
    }
}