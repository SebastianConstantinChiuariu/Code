#include <stdio.h>

char lletra;
double numero;

main(){
	printf("Insereix una lletra: ");
	scanf("%c",&lletra);
	printf("Insereix un nombre decimal: ");
	scanf("%lf",&numero);
	printf("\nLa lletra inserida es la '%c' i el numero %.2lf",lletra, numero);
	system("pause");
}	
