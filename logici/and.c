#include<stdio.h>
#define N 5

/* 
	AND operatore logico 
	OR 

*/

int main(){
	int v;
	int c;
	
	printf("Inserisci il voto --> ");
	scanf("%d", &v);
	printf("Inserisci la condotta --> ");
	scanf("%d", &c);
	
	if (v>=6 && c>6){
		printf("Promosso!!!!");
	}else{
		printf("Bocciato!!!!");
	}
	return 0;
}
