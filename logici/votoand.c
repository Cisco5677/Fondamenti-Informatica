#include<stdio.h>

struct alunno{
	int voto;
	int condotta;
};

int main(){
	struct alunno p1;
	
	do{
		printf("\n--- Pagella ---\n\n");
		printf("Inserisci il voto --> ");
		scanf("%d", &p1.voto);
		printf("Inserisci la condotta --> ");
		scanf("%d", &p1.condotta);
	}while((p1.voto>10 || p1.voto<0) || (p1.condotta>10 || p1.condotta<0));
	
	if(p1.voto>=6 && p1.condotta>6){
		printf("\nSei stato promosso con voto = %d e la condotta = %d",p1.voto,p1.condotta);
	}else{
		printf("\nSei stato rimandato con voto = %d e la condotta = %d",p1.voto,p1.condotta);
	}
	
}
