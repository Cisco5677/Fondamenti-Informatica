#include <stdio.h>
#include <stdlib.h>

/* Area del triangolo */

int main() {
	
	int area;
	int base;
	int altezza;
	
	printf("Inserisci l'altezza del triagolo: ");
	scanf("%d", &altezza);
	printf("Inserisci la base del triangolo: ");
	scanf("%d", &base);
	
	area=base*altezza/2;
	
	printf("Il Valore dell'area e': %d", area);
	return 0;
}
