#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int bucle=0,x,a,b,rep[5]; /*Bucles*/
int intent,nombre[5],caracter[5],encontrado=0,esta=0; /*Var int*/
main(){
	system("clear");
	printf("\n +-+-+ MASTERMIND +-+-+");
	printf("\n------------------------");
	int random[5];
	int barras[5];
	intent=0;
	aleatorio(random);
	printf("%d",random);
	printbarras(barras);

	do{
		printf("\n\nDescobreix el codi ocult. --> ");
		intent++;
		for (b=0;b<4;b++){
			printf("%c",barras[b]);
		}
		printf("\n%dº intent: ");
		scanf("%d",&nombre);
		for(b=0;b<4;b++){
			nombre[b]=caracter[b];
			printf("%d",caracter[b]);
		}
		encontrado=0;
		esta=0;
	}while(bucle!=1);
}


int aleatorio (int numaleatorio){
	int denegado=0,salir=0,numa[5],numb[5],a,b,c;
	srand(time(NULL));
	do{
		denegado=0;
		do{
			for(a=0;a<4;a++){
				numaleatorio=rand()%10;
				numa[a]=numaleatorio;
				numb[a]=numaleatorio;			
			}
			for(b=0;b<4;b++){
				for(c=0;c<4;c++){
					if(b!=c && numa[b]==numb[c]){
						denegado=1;
					}
					else{
						continue;
					}
				}
			}
			salir=1;
		}while(denegado==0);
	}while(salir==0);
	return numaleatorio;
}

int printbarras(int cantidadbarras[5]){
	for(x=0;x<4;x++){
		cantidadbarras[x]='_';
	}
}
