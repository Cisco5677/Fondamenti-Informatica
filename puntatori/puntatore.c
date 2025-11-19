#include<stdio.h>

/*  PUNTATORI  */


int main(){
	
	int x=10;
	int *p=&x;
	printf("%p", (void *)&x);
	printf("\n%p", (void *)p);
	printf("\n%p", p); // in teoria è sbagliato
	printf("\n%d", *p); //stampa il valore di x
	
	
	return 0;
}
