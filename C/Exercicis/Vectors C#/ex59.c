#include <stdio.h>

main() {
    int loop=1, count=0,x;
    double input[500], mediana, suma, resta;
    char killlop;

    do {
        printf("\n Numero: ");
        count++;
        scanf("%lf", &input[count-1]);
        suma += input[count-1];
        fflush(stdin);
        printf(" Inserir un altre(s/n): ");
        scanf("%c",&killlop);
        if (killlop=='n') {
            loop = 0;
        }
    } while (loop!=0);

    mediana=suma/count;
    printf("\n Quantitat de nombres %d || Suma dels nombres %.2lf || Mitjana dels nombres %.2lf\n", count, suma, mediana);

    for (x=0;x<count;x++){
        resta = input[x]-mediana;
        printf(" Diferencia: %d = %.2lf\n",input[x],resta);
    }

}

