#include <stdio.h>
int intro;

main(){
    printf("Escriu un nombre del 1 al 7: ");
    scanf("%d",&intro);
    switch(intro){
        case 1:
                printf("Dia %d equival a Dilluns",intro);
                break;
        case 2:
            printf("Dia %d equival a Dimarts",intro);
            break;
        case 3:
            printf("Dia %d equival a Dimecres",intro);
            break;
        case 4:
            printf("Dia %d equival a Dijous",intro);
            break;
        case 5:
            printf("Dia %d equival a Divendres",intro);
            break;
        case 6:
            printf("Dia %d equival a Dissabte",intro);
            break;
        case 7:
            printf("Dia %d equival a Diumenge",intro);
            break;
        default:
            printf("Nombre incorrecte");
            break;
    }


}