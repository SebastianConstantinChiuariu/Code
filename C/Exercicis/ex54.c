#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char lletra;
char paraula[100];
char barresbaixes[100];
int hi_es=0,i,posicio=0,rep=1;


main(){

    printf(" Introdueix una cadena: ");
    fgets(paraula,sizeof(paraula),stdin);
    strtok(paraula,"\n");
    for (i=0;i<strlen(paraula);i++){
        barresbaixes[i]='_';
    }
    while(rep!=0){
        printf("\n Insereix una lletra per descobrir la paraula secreta: ");
        scanf("%s",&lletra);
        posicio=0;
        for (i=0;i<strlen(paraula);i++){
            posicio++;
            if (paraula[i]==lletra){
                printf(" La lletra '%c' es situa a la %d casella.",lletra,posicio);
                
                hi_es=1;
                barresbaixes[i]=lletra;
            }
        }
        if (hi_es==0){
		    printf(" La lletra '%c' no es troba dins la paraula secreta",lletra);
	    }
        printf(" [ %s ]\n",barresbaixes);
        sleep(3);
        system("clear");
        
    }
}

/*Ara demana una lletra. Cerca la lletra a la paraula original. 
Si la troba, substiueix aquesta lletra a la cadena de barres baixes en la posició en que l’has trobada a la primera cadena. 
Imprimeix de nou la cadena de barres baixes (ara ha de sortir una lletra enmig).
*/