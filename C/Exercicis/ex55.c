#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char lletra;
char paraula[100];
char barresbaixes[100];
int hi_es=0,i,posicio=0,rep=1,x;


main(){

    printf(" Introdueix una cadena: ");
    fgets(paraula,sizeof(paraula),stdin);
    strtok(paraula,"\n");
   
    for (i=0;i<strlen(paraula);i++){
        barresbaixes[i]='_';
    }
    do{
        printf("\n Insereix una lletra per descobrir la paraula secreta: ");
        scanf("%s",&lletra);
        posicio=0;
        for (i=0;i<strlen(paraula);i++){
            posicio++;
            if (paraula[i]==lletra){
                hi_es=1;
                barresbaixes[i]=lletra;
            }
        }
        x=0;
        for (i=0;i<strlen(paraula);i++){
        	if(barresbaixes[i]=='_'){
        		x++;
			}
		}
        if (hi_es==0){
		    printf(" La lletra '%c' no es troba dins la paraula secreta",lletra);
	    }
        printf(" [ %s ] ",barresbaixes);
        if(x==0){
            printf("\n HAS ACONSEGUIT OMPLER TOTES LES CASELLES");
        }

        sleep(2);
        system("cls");
    }while(x!=0);
}
