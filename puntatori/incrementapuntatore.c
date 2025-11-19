#include<stdio.h>

/*  PUNTATORE INCREMENTA  */


void incrementa(int *n){
	*n+=1;
	printf("\nL'indirizzo di memoria di n e' %p", (void *)&n); //prende l'indirizzo di n invece solo n è il contenuto
}

int main(){
	
	int x=10;
	//int *p=&x;
	incrementa(&x);
	
	printf("\nL'indirizzo di memoria di x e' %p", (void *)&x);
	printf("\nIl valore incrementato e' = %d", x);
	
	
	return 0;
}
