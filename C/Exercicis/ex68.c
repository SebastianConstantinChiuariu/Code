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


int aleatorio (int numaleatorio[5]){
	int a,b,c,hi_es,generats=0;
	srand(time(NULL));
	do{
		for(c=0;c<4;c++){
			hi_es=0;
			numaleatorio[c]=rand()%10;
			generats++;
			for(a=0;a<4;a++){
				for(b=0;b<4;b++){
					if(a!=b && numaleatorio[a]==numaleatorio[b]){
						hi_es=1;
					}
				}
			}
			if(hi_es==1){
				c=0;
			}
		}
	}while(generats==4);
}

int printbarras(int cantidadbarras[5]){
	for(x=0;x<4;x++){
		cantidadbarras[x]='_';
	}
}
