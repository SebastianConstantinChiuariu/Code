#include <stdio.h>
#include<locale.h>

char opcio;
char frase[100];
char xifrat;
char resultat;
int nombre;
int i;


main ()
{
	setlocale(LC_CTYPE, "Spanish");
	
	while(opcio!='s'){
		system("cls");
		printf("Totes les lletres han d'anar en minuscules.\n\n");
		printf("Menú\n\n");
		printf("a) Introduir el codi de xifrat.\n");
		printf("b) Veure el codi.\n");
		printf("c) Xifrar una frase.\n");
		printf("d) Desxifrar una frase.\n");
		printf("s) Sortir.\n\n");
		printf("Elegeix una opció: ");
		fflush(stdin);
		scanf("%c",&opcio);

		switch(opcio){
			case 'a':
				printf ("\nIntrodueix el codi que utilitzaras per xifrar: \n");
				scanf("%d",&nombre);
				break;
			case 'b':
				printf ("\nEl codi que vols xifrar és el ");
				printf("%d", nombre);
				break;
			case 'c':
				fflush(stdin);
				printf("\n\n----------XIFRAR FRASES----------\n\n");
				printf("Indiqui la frase: ");
				fgets(frase,sizeof(frase),stdin);
				strtok(frase,"\n");
				for(i=0;i<strlen(frase);i++){
					xifrat=frase[i]+nombre;
					if (xifrat>'z'){
						xifrat=xifrat-26;
					}
					printf("%c",xifrat);
			    }
				break;
			case 'd':
				fflush(stdin);
				printf("\n\n----------DEXIFRAR FRASES----------\n\n");
				printf("Indiqui la frase: ");
				fgets(frase,sizeof(frase),stdin);
				strtok(frase,"\n");
				for(i=0;i<strlen(frase);i++){
					xifrat=frase[i]-nombre;
					if (xifrat<'a'){
						xifrat=xifrat+26;
					}
					printf("%c",xifrat);
			    }
				break;
		}
		printf("\n\n\nPrem qualsevol tecla per anar al menú: ");
		getch();
	}
	printf("Adeu");
	system("pause");
}

