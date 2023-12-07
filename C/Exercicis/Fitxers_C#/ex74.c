#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char lletra,caracter;
char paraula[100];
char escollida[20];
char cadenes[20];
char barresbaixes[100];
int hi_es=0,i,posicio=0,rep=1,vides=8,x,escollit,max=0,f,search=0,word[500],v;
FILE *file;

main(){

    if((file=fopen("randomfile.txt","r"))==NULL){
        printf("ERROR: file can't be open");
    }
    else{
        while (!feof(file)){
            caracter=fgetc(file);
            search++;
            if(caracter==' '||caracter=='\n'){
                max++;
                for(v=0;v<max;v++){
                	word[v]=search;
                	printf(" %d ",word[v]);
				}
            }   
	    }
    }
    srand(time(NULL));
    escollit=rand()%(max+0);
    







        /*
        strcpy(escollida,cadenes[escollit-1]);

        for (i=0;i<strlen(escollida);i++) {
            barresbaixes[i]='_';
        }

        do {
            printf("\n Insereix una lletra per descobrir la paraula secreta: ");
            scanf(" %c", &lletra);

            posicio=0;
            hi_es=0;


            for (i=0;i<strlen(escollida);i++) {
                posicio++;
                if (escollida[i]==lletra) {
                    hi_es=1;
                    barresbaixes[i]=lletra;
                }
            }

            if (hi_es==0){
                printf("\n La lletra '%c' no es troba dins la paraula secreta", lletra);
                vides--;
            }

            x = 0;
            for (i=0;i<strlen(escollida); i++) {
                if (barresbaixes[i]=='_') {
                    x++;
                }
            }
            printf("\n");
            printf(" [  %s  ] ",barresbaixes);
            printf(" // Numeros restants de vides { %d } //\n",vides);

            if (vides==0) {
                printf("--> S'han esgotat el nombre de vides <--");
                x=0;
            }

            if (x==0) {
                printf("\n HAS ACONSEGUIT OMPLER TOTES LES CASELLES");
            }

            sleep(4);
            system("cls");
    } while (x!= 0);*/
}        
















