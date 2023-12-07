#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  

double cm_to_inch(double conversiocm);
double inch_to_cm(double conversiocm);

int main(){
    int menu=0, rep=1;
    double cm=0, inch=0.0;

    while(rep!=0){
	    printf("\n ----- Conversio d'unitats ----- ");
	    printf("\n\n 1 - Pasar de Centimetres a Polzades");
	    printf("\n 2 - Pasar de Polzades a Centimetres");
	    printf("\n 3 - Sortir");
	    printf("\n\n: ");
	    scanf("%d", &menu);
        switch (menu){
            case 1:
                printf("\n Insereix els centimetres: ");
                scanf("%lf", &cm);
                printf("\n Polzades Totals: %.2lf", cm_to_inch(cm));
                sleep(3);
                system("cls");
                break;

            case 2:
                printf("\n Insereix les polzades: ");
                scanf("%lf", &inch);
                printf("\n Centimetres Totals: %.2lfcm", inch_to_cm(inch));
                sleep(3);
                system("cls");
                break;

            case 3:
                system("cls");  
                printf("\n Adeu");
                rep=0;  
                break;

            default:
                printf("Opcio no valida\n"); 
                sleep(2);
				system("cls");
				break; 
        }
    }

}

double cm_to_inch(double conversiocm){
    double inch=2.54;
    double totalinch = conversiocm/inch;
    return totalinch;
}

double inch_to_cm(double conversiocm){
    double centimetre=0.393701;
    double totalcm = centimetre*conversiocm;
    return totalcm;
}

