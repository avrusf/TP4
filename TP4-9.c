#include <stdio.h>
#include <string.h>

int main() {
	int i;
	char a[4] = "Hola";
	char b[4];
	int variable = 0;
	
	for(i=0; a[i]!=0; i++){
		printf("%c", a[i]);
	}
	
	for (i=4; i>0; i--){
		b[variable]= a[i];
		variable++;
	}
	
	for(i=0; a[i]!=0; i++){
		printf("%c", b[i]);
	}
	
	return 0;
}










