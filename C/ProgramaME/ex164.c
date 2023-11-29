#include <stdio.h>
int a1,a2,b1,b2,bucle=1,altura=0,base=0,area=0;
main(){
    do{
        scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
        
        base=a2-a1;
        printf("%d",base);
        altura=b2-b1;
        printf("%d",altura);
        area=base*altura;
        printf("%d",area);
        
    }while(bucle!=0);
}