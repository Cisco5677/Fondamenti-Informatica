#include <stdio.h>
#include <stdlib.h>

/* Enumerazione da 0 a 100 a multipli di 2 */

int main() {
	int i;
	
	for(i=0; i<=100; i+=2){
		printf("%d\n", i);
	}
	return 0;
}
