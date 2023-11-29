#include <stdio.h>
#include <string.h>

char input[20];
int i,x,espai;

main(){
	printf("Indica una frase de dues paraules: ");
	fgets(input,sizeof(input),stdin);
	for (i=0;i<strlen(input);i++){
		x++;
		if (input[i]==' '){
			espai=x;
		}
	}
	for (i=espai;i<10;i++){
		printf("%c",input[i]);
	}
	for (i=0;i<espai;i++){
		printf("\r%c",input[i]);
	}
	
}
