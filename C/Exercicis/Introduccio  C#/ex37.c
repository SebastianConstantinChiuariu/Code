#include <stdio.h>
#include<locale.h>

int petit;
int gran;
int nombre;
int nombre2;
int i;

main ()
{
	setlocale(LC_CTYPE, "Spanish");
	printf("Insereix un nombre: \n");
	scanf("%d",&petit);	
	for (i=1;i<=9;i++){
		fflush(stdin);
		printf("Insereix un nombre: \n");
		scanf("%d",&nombre);
		if (petit>nombre){
			petit=nombre;
		}
		if (gran<nombre){
			gran=nombre;
		}
	}
	printf("El nombre més petit és %d \n",petit);
	printf("El nombre més gran és %d \n",gran);
	system("pause");
}

