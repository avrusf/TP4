#include <stdio.h>

int main() {
	
	int numeros[10];
	int temp = 0;
	
	for (int i=0; i<10; i++){
		printf ("Ingrese diez numeros: %d \n", i);
		scanf ("%d", &numeros[i]);
	}
	for (int i=0; i<10; i++){
		printf ("%d, ", numeros[i]);
	}
	printf ("\n");
	for (int i=0; i<10; i++){
		for (int j=0; j<10; j++){
			if (numeros[j] < numeros[j+1]){
				temp = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j+1] = temp;
			}
		}
	}
	for (int i=0; i<10; i++){
		printf ("%d, ", numeros[i]);
	}
	
	return 0;
}






