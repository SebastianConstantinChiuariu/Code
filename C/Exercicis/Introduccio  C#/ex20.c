#include <stdio.h>
int num1;
int num2;
int mult;
main(){
	printf("Insereix un nombre: ");
	scanf("%d",&num1);
	printf("Insereix un altre nombre: ");
	scanf("%d",&num2);
	mult = num1 * num2;
	printf("\nLa multiplicació dels nombre dona: %d\n",mult);
	system("pause");
	
}
