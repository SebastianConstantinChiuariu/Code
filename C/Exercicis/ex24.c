#include <stdio.h>
double num;
main(){
	printf("Insereix un numero: ");
	scanf("%lf",&num);
	if (num >= 100 && num <= 200){
		printf("Numero %.2lf es correcte",num);
	}
	else{
		printf("Numero %.2lf es Incorrecte",num);
	}
}
