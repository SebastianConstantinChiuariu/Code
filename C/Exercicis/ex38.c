#include <stdio.h>
#include<locale.h>

int nombre;
int NombreBo = 24;
int i;
	
main ()
{
	setlocale(LC_CTYPE, "Spanish");
	printf("Joc d'adivinar el nombre ocult\n");
	do
	{
		printf("Indiqui un nombre del 1 al 100: ");
		scanf("%d",&nombre);
		if (nombre<NombreBo){
			printf("Malament, el nombre ocult és més gran.\n");
		}
		if (nombre>NombreBo){
			printf("Malament, el nombre ocult és més petit.\n");
		}
	} while(nombre<NombreBo || nombre>NombreBo);


	if (nombre==NombreBo){
		printf("Enhorabona, el nombre és correcte.\n");
	}
	system("pause");
}

