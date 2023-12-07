#include <stdio.h>
#include <string.h>

int breaks;
char fi[3]="fi";
char input[1001];
FILE *file;

main(){
    breaks=0;
    if((file=fopen("registre","w"))==NULL){
        printf("ERROR: no es pot obrir");
    }
    else{
        do{
            fgets(input,sizeof(input),stdin);
            strtok(input,"\n");
            if(strcmp(input,fi)==0){
                breaks=1;
            }
            else{
                fprintf(file,"%s\n",input);
            }
        }while(breaks==0);
    }
    
}
