#include <stdio.h>
#include<locale.h>

main (){
	
	char paraula[100];
	
	setlocale(LC_CTYPE, "Spanish");
	printf("Indiqui una paraula: ");
	fgets(paraula,sizeof(paraula),stdin);
	strtok(paraula,"\n");
	printf("\nEl nombre total de vocals és %d.\n",ContarVocals(paraula));
	printf("\n");
	system("pause");
}

int ContarVocals (char cadena[100]) {
	int i;
	int cont;
	
		for(i=0;i<strlen(cadena);i++){
			if (cadena[i]=='a' || cadena[i]=='e' || cadena[i]=='i' || cadena[i]=='o' || cadena[i]=='u' || cadena[i]=='A' || cadena[i]=='E' || cadena[i]=='I' || cadena[i]=='O' || cadena[i]=='U'){
				cont++;
			}
		}
	return cont;
}

