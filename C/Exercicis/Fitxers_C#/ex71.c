#include <stdio.h>

FILE *file;
int vector[11];
int multiplicat[11];
int x;

main(){
	if((file=fopen("vector_multiplicat","w"))==NULL){
		printf("ERROR: No es pot obrir");
	}
	else{
		for(x=10;x>0;x--){
			printf("Valors numerics restants %d: ",x);
			scanf("%d",&vector[x]);
			multiplicat[x]=vector[x]*5;
			fprintf(file,"%d ",multiplicat[x]);
		}
	}
}
