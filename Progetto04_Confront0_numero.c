#include <stdio.h>
#include <stdlib.h>

/* Confronto fra due numeri iteri */

int main() {
	int a;
	int b;
	
	printf("Inserisci il primo valore: ");
	scanf("%d", &a);
	printf("Inserisci il secondo valore: ");
	scanf("%d", &b);
	
	if(a>b){
		printf("%d e' maggiore di %d",a, b);
	} else if(a<b)	{
		printf("%d e' maggiore di %d",b, a);
	} else {
		printf("Sono uguali");
	}
	
	return 0;
}
