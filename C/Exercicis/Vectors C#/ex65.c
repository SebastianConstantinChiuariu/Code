#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int x,random;

main(){
	srand(time(NULL));
	for (x=0;x<6;x++){
		random = rand()%49+1;
		printf("%d ",random);
	}
}
