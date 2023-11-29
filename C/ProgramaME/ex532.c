#include <stdio.h>
int casos,x,neto,total,envase;
main(){
    scanf("%d",&casos);
    for(x=0;x<casos;x++){
        scanf("%d %d",&neto,&total);
        envase=total-neto;
        printf("%d\n",envase);
    }
}