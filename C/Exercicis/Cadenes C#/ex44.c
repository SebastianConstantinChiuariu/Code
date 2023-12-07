#include <stdio.h>
#include <string.h>
int i=0;
char input [100];

main(){
	printf("Insereix una frase: ");
	fgets(input,sizeof(input),stdin);
	for(;i<strlen(input);i++){
		if (isupper(input[i])){
			printf(" %c ",input[i]);
		}
		
		for(;i<strlen(input);i++){
			if (isupper(input[i])){
				printf(" ");
			}
			if (islower(input[i])){
				printf("%c",input[i]);
			}
		}
	}

	system("pause");
	
}
