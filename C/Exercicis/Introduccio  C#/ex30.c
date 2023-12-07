#include <stdio.h>

int num1,num2;

main(){
    printf("Insereix dos numeros per a multiplicar: ");
    scanf("%d %d",&num1,&num2);
    printf("%d x %d",num1,num2);
    num1=num1*num2;
    printf(" = %d ",num1);
}