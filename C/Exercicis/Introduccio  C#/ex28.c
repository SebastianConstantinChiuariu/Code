#include <stdio.h>

int x;

main(){
    for(x=0;x<101;x++){
        if(x%2==0){
            printf(" %d\t",x);
        }
    }
}