#include <stdio.h>
#include <unistd.h>
#include <time.h>

int casos,x,y,z;
int calendarios,fechas[61],menor,mayor,restantes=1;

main(){
	scanf("%d",&casos);
	for (x=0;x<casos;x++){
		restantes=1;
		menor=0;
		mayor=0;
		scanf("%d",&calendarios);
		for (y=0;y<calendarios;y++){
			scanf("%d",&fechas[y]);
		}
		menor=fechas[0];
		for(y=0;y<calendarios;y++){
			if(menor>fechas[y]){
				menor=fechas[y];
			}
			if (mayor<fechas[y]){
				mayor=fechas[y];
			}
			
		}
		for(menor;menor<mayor;menor++){
			restantes++;
			for(z=0;z<calendarios;z++){
				if(menor==fechas[z]){
					restantes--;
					continue;
				}
			}
		}
		printf("%d\n",restantes);
	}
	return 0;
}