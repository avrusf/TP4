#include <stdio.h>

int main() {
	char cadena[20]= "hola";
	char tres[20]= {0};
	
	
	for(int i=0; cadena[i]!=0; i++){
		printf("%c", cadena[i]);
	}
	
	for (int i=0; cadena[i]!=0; i++){
		tres[i]= cadena[i]+3;
		printf ("\n %c", tres[i]);
		printf (" %d", tres[i]);
	}
	
	return 0;
}












