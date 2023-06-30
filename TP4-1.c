#include <stdio.h>
#include <math.h>

int main() {
	int t;
	float valor[10];
	float suma_pares;
	float suma_impares;
	float suma=0.0;
	float promedio_pares;
	float promedio_impares;
	
	for (t=0; t<10; t++){
		printf("Ingrese el valor %d \n", t);
		scanf("%f", &valor[t]);
		
	}
	for (t=0; t<10; t=t+2){
		suma_pares=suma_pares+valor[t];
		
	}
	for (t=1; t<10; t=t+2){
		suma_impares=suma_impares+valor[t];
		
	}
	
	promedio_pares=suma_pares/10;
	printf ("el promedio de los numeros pares es: %f", promedio_pares);
	
	promedio_impares=suma_impares/10;
	printf ("el promedio de los numeros impares es: %f", promedio_impares);
	return 0;
}


