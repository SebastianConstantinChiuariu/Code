#include <stdio.h>
#include<locale.h>

int nombre;
		
main ()
{
	setlocale(LC_CTYPE, "Spanish");
	printf("Indiqui un número: ");
	scanf("%d",&nombre);
	if (nombre%10==0){
		printf("El nombre acaba en 0 \n");
	}
	else{
		printf("El nombre no acaba en 0 \n");
	}
	system("pause");
}

