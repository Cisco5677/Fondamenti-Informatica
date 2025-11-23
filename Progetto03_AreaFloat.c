#include <stdio.h>
#include <stdlib.h>

/* Area del triangolo con %.2f che mi fa visualizzare le 2 cifre dopo la virgola */

int main() {
	float base;
	float altezza;
	float area;
	
	
	printf("Inserisci l'altezza del triangolo: ");
	scanf("%f", &altezza);
	printf("Inserisci la base del triangolo: ");
	scanf("%f", &base);
	
	area= base*altezza/2;
	
	printf("L'area del triangolo e': %.2f", area);
	
	
	return 0;
}
