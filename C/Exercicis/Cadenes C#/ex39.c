#include <stdio.h>
#include<locale.h>

int nombre;
int NombreBo = 24;
int error;
	
main ()
{
	setlocale(LC_CTYPE, "Spanish");
	printf("Joc d'adivinar el nombre ocult, amb M�XIM d'intent 6.\n");
	do{
		fflush(stdin);		
		printf("Indiqui un nombre del 1 al 100: ");
		scanf("%d",&nombre);
		if (nombre<NombreBo){
			printf("Malament, el nombre ocult �s m�s gran.\n");
			error++;
		}
		if (nombre>NombreBo){
			printf("Malament, el nombre ocult �s m�s petit.\n");
			error++;
		}
		if (nombre==NombreBo){
			printf("Enhorabona, el nombre �s correcte.\n");
		}
	}while(nombre!=NombreBo && error<=5);
	printf("S'han acabat els intents.\n");
	system("pause");
}

