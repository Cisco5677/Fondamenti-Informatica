#include<stdio.h>
#include<string.h>
#include<time.h>
#define N 30
#define DIM 3

/* Struct Persone */

struct Persona{
	char nome[N];
	char cognome[N];
	unsigned short int eta;
	
};

void leggiStringa (char str[], int dim) {
    fgets(str, dim, stdin);
    if (str[strlen(str)-1]=='\n')
        str[strlen(str)-1]='\0';
    else
        while (getchar()!='\n');
}

int main(){
	int i=1;
	struct Persona p[DIM];
	
	printf("----- Inserimento Persone -----\n\n");
	
	for(i=0; i<DIM; i++){
		printf("Inserisci il id[%d] tuo Nome---> ",i+1);
		leggiStringa(p[i].nome,N);
		printf("Inserisci il id[%d] tuo Cognome---> ",i+1);
		leggiStringa(p[i].cognome,N);
		printf("Inserisci la id[%d] tua eta'---> ",i+1);
		scanf("%d", &p[i].eta);
		getchar();
	}
	
	printf("\n----- Stampa Persone -----");
	for(i=0; i<DIM; i++){
		
		printf("\nid[%d]Nome e': %s ",i+1,p[i].nome);
		printf("\nid[%d]Cognome e': %s ",i+1,p[i].cognome);
		printf("\nid[%d]Eta' e': %d \n",i+1,p[i].eta);
	}
	printf("\n-------------------");
	

	
	return 0;
}
