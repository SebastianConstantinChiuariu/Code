#include <stdio.h>
#include<locale.h>

char lletra;
		
main ()
{
	setlocale(LC_CTYPE, "Spanish");
	printf("Indiqui una lletra: ");
	scanf("%c",&lletra);
	if (lletra=='a' || lletra=='e' || lletra=='i' || lletra=='o' || lletra=='u'){
		printf("La lletra és una vocal \n");
	}
	else{
		printf("La lletra és una consonant \n");
	}
	system("pause");
}

