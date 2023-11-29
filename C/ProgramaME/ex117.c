#include <stdio.h>
#include <string.h>

char input[100];
int i, y, loop;

int main(){
    scanf("%d",&loop);
    fflush(stdin); 
    for (y=0;y<loop;y++){
        fgets(input,sizeof(input),stdin);
        printf("Hola, ");
        for (i=4;i<strlen(input);i++){ 
            printf("%c", input[i]);
        }
    }
    system("pause");
}