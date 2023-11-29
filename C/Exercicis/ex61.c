#include <stdio.h>
#include<locale.h>

int digit (char nombre);

int main (){
	
	char caracter;
	int resultat;
		
	setlocale(LC_CTYPE, "Spanish");
	printf("Indiqui un caracter: ");
	scanf("%c",&caracter);
	resultat=digit(caracter);
	if (resultat){
		printf("\nSi és un dígit.\n");
	}
	else{
		printf("\nNo és un dígit.\n");
	}
	printf("\n");
}

int digit (char nombre){
	
	if (nombre>='0' && nombre<='9'){
		return 1;
	}
	else{
		return 0;
	}
}

