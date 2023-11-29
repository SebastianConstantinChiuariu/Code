#include <stdio.h>
#include <string.h>

int casos,x,y;
int contador,a,e,i,o,u;
char cadena[31];
main(){
    scanf("%d",&casos);
  	getchar();
    for(x=0;x<casos;x++){
        fgets(cadena,sizeof(cadena),stdin);
        a=0;
        e=0;
        i=0;
        o=0;
        u=0;
        if (strcmp(cadena, "aeiou\n")==0){
            printf("NO\n");
            continue;;
        }
        for(y=0;y<strlen(cadena);y++){
            switch (cadena[y]){
            case 'a':
                a++;
                break;
            case 'e':
                e++;
                break;
            case 'i':
                i++;
                break;
            case 'o':
                o++;
                break;
            case 'u':
                u++;
                break;
            
            default:
                break;
            }
        }
        if(a>0 && e>0 && i>0 && o>0 && u>0){
            printf("SI\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}