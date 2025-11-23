#include<stdio.h>
#define N 8

/* Flag 1 = TRUE , 0 = FALSE
	NOT(a)=VERO a==0;
	
	clear; gcc -o nome nome && ./nome
*/

int b[N];

int main(){
	int a[N]={1,2,2,4,5,4,8,10};
	int i,j=0,k=0;
	int ispresent;
	
	for(i=0; i<N; i++){
		ispresent=0; //flag a 0
		for(j=0; j<N; j++){
			if(a[i]==b[j]){
				ispresent=1;
				break;
			} //il valore è stato trovato quindi è un duplicato
		}
		if(!ispresent){
			b[k]=a[i];
			k++;
		} //se non è presente lo insersco nel nuovo array
	}
	
	
	printf("--- Stampa Vettore senza errori ---\n\n");
	for(i=0; i<N; i++){
		printf("a[%d]= %d\n",i,b[i]);
	}
	
	return 0;
}
