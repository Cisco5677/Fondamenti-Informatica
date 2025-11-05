#include <stdio.h>
#define N 5
/* stampare il valore max e il valore min */

int main() {
	
	int a[N];
	int i;
	int max=0;
	int min=10000000;
	
	printf("Inserimento dell'array\n\n");
	
	for(i=0; i<N; i++){
		
		printf("Inserisci a[%d] = ",i);
		scanf("%d", &a[i]);
		
		if(max<a[i]){
			max=a[i];
		} 
		if(min>a[i]){
			min=a[i];
		}
	}
	
	printf("\nIl valore min dell'array e': %d",min);
	printf("\nIl valore max dell'array e': %d",max);
	return 0;
}

