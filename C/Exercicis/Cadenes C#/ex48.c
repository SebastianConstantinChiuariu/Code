#include <stdio.h>
#include<locale.h>

char paraula[100];
int i=101;
int cont;

main ()
{
	setlocale(LC_CTYPE, "Spanish");
	printf("Indiqui una paraula: \n");
	fgets(paraula,sizeof(paraula),stdin);
	for(;i>-1;i--){

		printf("%c", paraula[i]);
    }
    printf("\n");
	system("pause");
}

