#include <stdio.h>
#include <string.h>

FILE *file;
int loop=1,x;
int numbers[5001],vocals,leters,words;
char chars[2001];

main(){
    if((file=fopen("fitxer","r"))==NULL){
        printf("ERROR: File can not be open");
    }
    else{
        fgets(chars,2000,file);
        leters=strlen(chars)-1; /*It works*/
        for(x=0;x<leters;x++){
            switch(chars[x]){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    vocals++;
                    break;
                default:
                    break;
            }/*It works*/
        }
        for(x=0;x<strlen(chars);x++){
            if(chars[x]==' '||chars[x]=='\n'){
                words++;
            }
        }
        printf("%d",words+1);
        for(x=0;x<5000;x++){
            fscanf(file,"%d",&numbers[x]); 
            printf("%d",numbers[x]);
        }
    }
}