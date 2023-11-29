#include <stdio.h>
#include <string.h>
int x=0;
char input [100];

main(){
	printf("Insereix una frase: ");
	fgets(input,sizeof(input),stdin);
	for (;x<strlen(input);x++){
		
		switch (input[x]){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				printf(".");
				break;
			default:
				printf("%c",input[x]);
			
		}
	}

	system("pause");
	
}
