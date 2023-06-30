#include <stdio.h>
#include <math.h>

int main() {
	int notas_alumnos[15];
	int numeros[11]={0};
	
	
	
	for (int t = 0; t < 15; t++){
		printf("Ingrese la nota de quince alumnos [%d]\n", t);
		scanf("%d", &notas_alumnos[t]);
		numeros[notas_alumnos[t]]++;
		
	}
	for (int t = 0; t < 10; t++)
		printf ("Mostrar la cantidad de alumnos por cada nota [%d]\n", numeros[t]);
	
}





