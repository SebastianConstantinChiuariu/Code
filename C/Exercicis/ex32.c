#include <stdio.h>
double d1;
double suma;
double total;
int stop = 1;
int i;

main(){
    do {
        printf("Insereix un nombre per fer una mitjana: ");
        scanf("%lf",&d1);
        stop++;
        suma = suma + d1;
        printf("Si desitjes inserir altra xifra insereix (0) sino (1): ");
        scanf("%d",&i);
    }while (stop<=5 && i!=1);
    total = suma/stop;
    printf("La mitjana dels anteriors numeros dona: %.2lf",total);
    

} 