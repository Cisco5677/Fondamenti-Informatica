#include<stdio.h>
#include<stdlib.h> // ----> Libreria per la funziona rand() srand(time (NULL))
#include<time.h> // funzione time()
#define N 5

/* ----Algoritmi di ordinamento-----
	1. Bubble sort ---> o(N^2) complessità sondizzionale dell'algoritmo
	2. Insort 
	3. Quicksort 
	4. Bogosort
  */

void bubble_sort(int a[N]) {
	int i,temp,j;
	
    for(i=0; i<N-1; i++){
    	for(j=0; j<N-1; j++){
    		if(a[j]>a[j+1]){
    			temp=a[j];
    			a[j]=a[j+1];
    			a[j+1]=temp;
			}
		}
	}
}


int main(){
	
	srand(time(NULL));
	int a[N];
	int i;
	
	printf("\n-----Stampo i valori attuali-----\n\n");
	
	for(i=0; i<N; i++){
		printf("Il valore di a[%d] = %d\n",i,a[i]);
	}
	
	printf("\n-----Adesso do dei valori casuali-----\n\n");
	
	for(i=0; i<N; i++){
		a[i] = rand()%(101);
		printf("Il valore di a[%d] adesso e' = %d\n",i,a[i]);
	}
	
	printf("\n\n----Array ordinato: ----\n\n");
	
	for(i=0; i<N; i++){
		bubble_sort(a);
		printf("Il valore di a[%d] adesso e' = %d\n",i,a[i]);
	}
	
	return 0;
}
