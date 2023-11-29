#include <stdio.h>
int input[11],i;
main(){
	for(i=0;i<10;i++){
		scanf("%d",&input[i]);
	}
	printf("\n");
	for(i=9;i>-1;i--){
		printf("%d",input[i]);
	}
}
