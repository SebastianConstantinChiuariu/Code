#include <stdio.h>

int x,random[11];
int bigger,smaller;
FILE *file;

main(){
    if((file=fopen("randomx10","w"))==NULL){
        printf("ERROR: File can not be open");
    }
    else{
        srand(time(NULL));
        for(x=0;x<10;x++){
            random[x]=rand()%100+1;
            if(x==9){
                fprintf(file,"%d.",random[x]);
            }
            else{
                fprintf(file,"%d,",random[x]);
            }
            
        }
        for(x=0;x<10;x++){
            fscanf(file,"%d",&random[x]);
        }
        smaller=random[0];
        for(x=0;x<10;x++){
            if(smaller>random[x]){
                smaller=random[x];
            }
            if(bigger<random[x]){
                bigger=random[x];
            }
        }
        
        printf("\nMenor:%d ||",smaller);
        printf(" Major:%d ",bigger);

    }
}