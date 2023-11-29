#include <stdio.h>

int casos, repetir, mes, dia;
int year[12]={31,28,31,30,31,30,31,31,30,31,30,31}; 

int main() {
    scanf("%d", &casos);

    for (repetir = 0; repetir < casos; repetir++) {
        scanf("%d %d", &dia, &mes);

        while ((mes > 0 && mes <= 12) && (dia>0 && dia<=year[mes-1])) { 
            dia = year[mes - 1] - dia;

            for (mes;mes<12;mes++){ 
                dia=dia+year[mes];
            }

            printf("%d\n",dia);
			break; 
        }
    }

}

