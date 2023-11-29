#include <stdio.h>
#include<locale.h>

char lletra;
		
main ()
{
	setlocale(LC_CTYPE, "Spanish");
	printf("Indiqui una lletra: ");
	scanf("%c",&lletra);
	if (lletra == 'a'){
		printf("La lletra és una 'a' \n");
	}
	else{
		printf("La lletra no és una 'a' \n");
	}
	system("pause");
}

