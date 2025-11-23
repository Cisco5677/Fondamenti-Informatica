#include <stdio.h>
#include <stdlib.h>

/* Fibonacci */

int main() {
	
	int a[10];
	int i=0;
	
	printf("------- Fibonacci -------\n\n");
	
	printf("Inserisci il valore di v[%d]---> ",i);
	scanf("%d", &a[0]);
	printf("Inserisci il valore di v[%d]---> ",i+1);
	scanf("%d", &a[1]);
	
	
	printf("\nIl valore di v[0] = %d\nIl valore di v[1] = %d\n",a[0],a[1]);
	for(i=2; i<10; i++){
		a[i]= a[i-1] + a[i-2];
		printf("Il valore di v[%d] = %d\n",i, a[i]);
	}
	
	
	return 0;
}
