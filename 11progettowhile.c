#include <stdio.h>

/*  */

int main() {
	int i=0;
	int somma=0;
	
	while(i<=100){
		somma+=i;
		i++;
	}
	printf("La somma dei numeri da 1 a 100 e': %d",somma);
	
	return 0;
}
