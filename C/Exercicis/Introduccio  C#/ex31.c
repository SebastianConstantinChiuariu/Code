#include <stdio.h>
#include<locale.h>

int opcio;
int edat;
int any;

main ()
{
	setlocale(LC_CTYPE, "Spanish");
	printf("Elegesqui una opció; (1)Pregunta, (2)Pregunta, (3)Sortir: ");
	scanf("%d",&opcio);
	while (opcio==1 || opcio==2)
	{
		if (opcio==1){
			printf("Quina edat tens? ");
			scanf("%d",&edat);
			any=2023-edat;
			printf("Vas neixer a l'any %d \n", any);
		}
		if (opcio==2){
			printf("Hola que tal? \n");
		}
	printf("Elegesqui una opció; (1)Pregunta, (2)Pregunta, (3)Sortir: ");
	scanf("%d",&opcio);
	}
	if (opcio==3){
		printf("Sortir \n");
	}
	system("pause");
}

