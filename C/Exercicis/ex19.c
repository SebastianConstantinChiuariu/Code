#include <stdio.h>
int nombre;
int total;

main(){
	printf(" Insereix un numero per fer el seu quadrat: ");
	scanf("%d",&nombre);
	total = nombre * nombre;
	printf("El quadrat del nombre es: %d",total);
}
