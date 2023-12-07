#include <stdio.h>
double d1;
double suma = 0;
int i;
main(){
    do {
        printf("Insereix un nombre per fer una suma: ");
        scanf("%lf",&d1);
        suma = suma + d1;
        printf("Inserir altra xifra (0), Exit (1): ");
        scanf("%d",&i);
    }while (i!=1);
    printf("La suma dels anteriors numeros = %.2lf",suma);
}³