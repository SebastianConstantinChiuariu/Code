#include <stdio.h>
#include<locale.h>

char petit;
char lletra;
char resultat;
int i;

main ()
{
	setlocale(LC_CTYPE, "Spanish");
	printf("TOTES LES LLETRES HAN D'ANAR EN MAJÚSCULA. \n");
	printf("I NO PODEN CONTENIR CARACTERS ESPECIALS. \n");
	printf("Insereix una lletra: \n");
	scanf("%c",&petit);	
	for (i=1;i<=9;i++){
		fflush(stdin);
		printf("Insereix una lletra: \n");
		scanf("%c",&lletra);
		if(petit>lletra){
			petit=lletra;
		}
	}
	printf("La lletra més petita és %c \n",petit);
	system("pause");
}

