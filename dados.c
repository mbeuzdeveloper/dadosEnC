#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomizer(void);

int main(){
	/*La idea es crear cuatro dados*/
	/*Uno de cuatro lados, uno de seis lados, uno de ocho y uno de doce.*/
	/*Loop con posibilidad de nueva consulta.*/
	
	int opt; /*Seleccion del seleccionador.*/
	char sino; /*Selector reiniciar.*/
	
	do{ /*Inicio del programa*/

	/*Inicio de Seleccionador*/
	printf("Selecciona el dado:\n\n");
	printf("[1] Dado de 4\n");
	printf("[2] Dado de 6\n");
	printf("[3] Dado de 8\n");
	printf("[4] Dado de 12\n");
	printf("Ingresa tu Seleccion: (Seleccione la opcion entre los corchetes) ");
	scanf("%d",&opt);
	
	switch(opt){	/*Salidas*/
		case 1:
			printf("\nResultado del dado de 4: %d\n",(randomizer()%4)+1);
			break;
		case 2:
			printf("\nResultado del dado de 6: %d\n",(randomizer()%6)+1);
			break;
		case 3:
			printf("\nResultado del dado de 8: %d\n",(randomizer()%8)+1);
			break;
		case 4:
			printf("\nResultado del dado de 12: %d\n",(randomizer()%12)+1);
			break;
		default:
			printf("Opcion no disponible.\n");
	}

	/*Cierre de selecciondor*/
	printf("Desea volver a tirar? (Seleccione s/n) ");
	scanf("%c",&sino);
	
	}while(sino=='n');
	


	return(0);
}

int randomizer(void){
	int x;
	srand((unsigned)time(NULL));
	x=rand();
	return x;
}
