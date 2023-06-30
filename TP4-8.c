#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main() {
	double grados[36];
	int valores_de_x[36];	
	
	for (int i=0; i<36; i++){
		valores_de_x[i] = i * 10;
		grados[i] = sin (valores_de_x[i] * PI / 180);
	}
	
	for (int i = 0; i<36; i++){
		printf ("%lf, %d\n", grados[i], valores_de_x[i]);
	}
	
	
	return 0;
}








