#include <stdio.h>

int main() {
	char cadena[20]= "otorrinolaringologia";
	int contador=0;
	
	
	for(int i=0; cadena[i]!=0; i++){
		printf("%c", cadena[i]);
	}
	for (int i=0; cadena[i]!=0; i++){
		switch(cadena[i]){
		case 'a':
			contador++;
			break;
		case 'e':
			contador++;
			break;
		case 'i':
			contador++;
			break;
		case 'o':
			contador++;
			break;
		case 'u':
			contador++;
			break;
		}
	}
	printf ("\nLas vocales son: %d",contador);
	return 0;
}











