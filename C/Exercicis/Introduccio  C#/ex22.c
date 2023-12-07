#include <stdio.h>
int menu;
double area;
double perimetre;
double base;
double radi;
double altura;
double PI = 3.14;

main(){
	printf("Area de la figura que vols calcular? (1)Cercle, (2)Rectangle, (3)Triangle: ");
	scanf("%d",&menu);
	if (menu == 1){
		printf("Insereix el radi del cercle: ");
		scanf("%lf",&radi);
		area = PI * radi * radi;
		perimetre = 2 * PI *radi;
		printf("El area del cercle es: %.2lf, i el perimetre es: %.2lf\n",area,perimetre);
	}
	if (menu==2){
		printf("Insereix la base del rectangle: ");
		scanf("%lf",&base);
		printf("Insereix l'altura del rectangle: ");
		scanf("%lf",&altura);
		area = base * altura;
		printf("L'area del rectangle es: %.2lf\n",area);
	}
	if (menu==3){
		printf("Insereix la base del triangle: ");
		scanf("%lf",&base);
		printf("Insereix l'altura del triangle: ");
		scanf("%lf",&altura);
		area = base * altura /2;
		printf("L'area del triangle es: %.2lf\n",area);
	}
	
	system("pause");
	
}
