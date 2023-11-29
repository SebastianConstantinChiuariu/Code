#include <stdio.h>
#include <ctype.h>
#include <string.h>

int x,y,rep;
char acronimo[30];

int main() {

    scanf("%d",&rep);
    fgets(acronimo,sizeof(acronimo),stdin);
    for (y=0;y<=rep;y++){
        fgets(acronimo,sizeof(acronimo),stdin);
        for (x=0;x<strlen(acronimo);x++) {
	        if (isupper(acronimo[x])) {
	            printf("%c", acronimo[x]);
	        }
    	}
	}
}

