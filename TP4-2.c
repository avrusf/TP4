#include <stdio.h>
#include <math.h>

int main() {
	float muestra[10];
	float suma = 0;
	float promedio;
	int alumnos_mayores_al_promedio = 0;
	int alumnos_menores_al_promedio = 0;
	
	for (int t = 0; t < 10; t++){
		printf("Ingrese la nota de diez alumnos [%d]\n", t);
		scanf("%f", &muestra[t]);
		suma = suma + muestra[t];
	}
	promedio = suma / 10;
	printf ("el promedio es: %.2f\n", promedio);
	
	for  (int t = 0; t < 10; t++){
		
		if (muestra[t] < promedio)
		{
			alumnos_menores_al_promedio++;	
		} 
		if (muestra[t] >= promedio)
		{
			alumnos_mayores_al_promedio++;
		}
	}
	
	printf ("La cantidad de alumnos que superaron al promedio es: %d\n", alumnos_mayores_al_promedio);
	printf ("La cantidad de alumnos que estan por debajo al promedio es: %d\n", alumnos_menores_al_promedio);
	
	
	
	return 0;
}



