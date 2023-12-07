#include <stdio.h>
#include <string.h>
int x=0,total=0;
char input [100];
int a=0,e=0,i=0,o=0,u=0;

main(){
	printf("Insereix una frase: ");
	fgets(input,sizeof(input),stdin);
	for (;x<strlen(input);x++){
		
		switch (input[x]){
			case 'a':
				a++;
				printf("%c",input[x]);
				break;
			case 'e':
				e++;
				printf("%c",input[x]);
				break;
			case 'i':
				i++;
				printf("%c",input[x]);
				break;
			case 'o':
				o++;
				printf("%c",input[x]);
				break;
			case 'u':
				u++;
				printf("%c",input[x]);
				break;
			default:
				printf("%c",input[x]);
				total=a+e+i+o+u;
			
		}
	}
	printf("Quantitat de vocals: (a): %d | (e): %d | (i): %d | (o): %d | (u): %d |",a,e,i,o,u);
	printf(" Total de vocals: %d\n",total);
	system("pause");
	
}
