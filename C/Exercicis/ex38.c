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
			printf("Malament, el nombre ocult �s m�s gran.\n");
		}
		if (nombre>NombreBo){
			printf("Malament, el nombre ocult �s m�s petit.\n");
		}
	} while(nombre<NombreBo || nombre>NombreBo);


	if (nombre==NombreBo){
		printf("Enhorabona, el nombre �s correcte.\n");
	}
	system("pause");
}

