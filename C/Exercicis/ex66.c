#include <stdio.h>
#include <stdlib.h>
#include <time.h>


main(){
	int x,random;
	srand(time(NULL));
	for (x=0;x<14;x++){
		random=rand()%3 + 1;
		switch (random){
			case 1:
				printf(" 1 \n");
				break;
			case 2:
				printf(" 		2 \n");
				break;
			case 3:
				printf(" 	X \n");
				break;
		}
	}
}

