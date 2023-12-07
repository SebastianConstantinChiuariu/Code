#include <stdio.h>
#include <locale.h>
#include <time.h>

int eleccio;
int nombre1;
int nombre2;
int suma;
int resta;
int multiplicacio;
int divisio;
		
main ()
{
	while(eleccio!=5){
		system("cls");
		printf("\n\nMENU CALCULADORA:\n");
		printf("\n 1- Sumar \n 2- Restar \n 3- Multiplicar \n 4- Dividir\n 5- Sortir \n \n Indiqui l'opció: ");
		scanf("%d",&eleccio);
		switch(eleccio){
		
		case 1:
			printf("\nSUMAR \n\n");		
			printf("Indiqui el primer nombre: ");
			scanf("%d",&nombre1);
			printf("Indiqui el segon nombre: ");
			scanf("%d",&nombre2);
			suma=nombre1+nombre2;
			printf("La suma dels dos nombre es %d \n", suma);
			break;
		case 2:
			printf("\nRESTAR \n\n");
			printf("Indiqui el primer nombre: ");
			scanf("%d",&nombre1);
			printf("Indiqui el segon nombre: ");
			scanf("%d",&nombre2);
			resta=nombre1-nombre2;
			printf("La resta dels dos nombre es %d \n", resta);
			break;
		case 3:
			printf("\nMULTIPLICAR \n\n");
			printf("Indiqui el primer nombre: ");
			scanf("%d",&nombre1);
			printf("Indiqui el segon nombre: ");
			scanf("%d",&nombre2);
			multiplicacio=nombre1*nombre2;
			printf("La multiplicacio dels dos nombre es %d \n", multiplicacio);
			break;
		case 4:
			printf("\nDIVIDIR \n\n");
			printf("Indiqui el primer nombre: ");
			scanf("%d",&nombre1);
			printf("Indiqui el segon nombre: ");
			scanf("%d",&nombre2);
			divisio=nombre1/nombre2;
			printf("La divisió dels dos nombre és %d \n", divisio);
			break;
		}
		sleep(5);
	}
	printf("Adeu");
	system("pause");
}

