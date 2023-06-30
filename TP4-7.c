#include <stdio.h>

int main() {
	int numero[20];
	int contador = 0;
	int infinito = 1;
	int no_primo = 0;
	
	while (contador<20){
		for (int i=2; i<infinito; i++){
			if (infinito % i == 0){
				no_primo = 1;
			}
		}
		if (no_primo == 0){
			numero[contador] = infinito; 
			contador++;
		}
		infinito++;
		no_primo = 0;
	}
	printf ("Los 20 primeros numeros primos son: \n");
	for (int i=0; i<20; i++){
		printf ("%d, ", numero[i]);
	}
	
	return 0;
}








