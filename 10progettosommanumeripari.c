#include <stdio.h>
#include <stdlib.h>

/* La somma dei numeri n solo pari, stampando i cicli e le somme */

int main() {
	int n;
	int somma=0;
	int i;
	
	printf("Inserisci un numero: ");
	scanf("%d", &n);
	
	for(i=0; i<=n; i++){
		if(i%2==0) //faccio il resto del contatore
			somma=somma+i;
			printf("La somma dei numeri pari del ciclo %d numeri e': %d\n",i, somma);
	}
	
	return 0;
}
