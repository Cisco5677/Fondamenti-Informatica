#include<stdio.h>
#include<string.h>
#define N 30
#define DIM 2
#define FFLUSH while(getchar()!='\n');	

/* Struct Dipendenti */

struct Lavoratori{
	char nome[N];
	char cognome[N];
	int stipendio;
	
};

void leggiStringa (char str[], int dim) {
    fgets(str, dim, stdin);
    if (str[strlen(str)-1]=='\n')
        str[strlen(str)-1]='\0';
    else
        while (getchar()!='\n');
}

int main(){
	
	int i;
	struct Lavoratori d[DIM];
	float media;
	int min,max;
	
	printf("----- Inserimento Dipendenti -----\n\n");
	
	for(i=0; i<DIM; i++){
		printf("Inserisci il id[%d] tuo Nome---> ",i);
		leggiStringa(d[i].nome,N);
		printf("Inserisci il id[%d] tuo Cognome---> ",i);
		leggiStringa(d[i].cognome,N);
		printf("Inserisci id[%d] stipendio'---> ",i);
		scanf("%d", &d[i].stipendio);
		printf("\n");
		FFLUSH //ripulisce il buffer dagli '\n' in modo tale che lo scanf non li conti come valore.
		media += d[i].stipendio;
	}
	
	max=d[0].stipendio;
	min=d[0].stipendio;
	
	for(i=0; i<DIM; i++){
		if(max<d[i].stipendio){max=d[i].stipendio;} 
		if(min>d[i].stipendio){min=d[i].stipendio;}
	}
	
	printf("\n----- DataBase -----");
	for(i=0; i<DIM; i++){
		printf("\nId[%d]Nome e': %s ",i,d[i].nome);
		printf("\nId[%d]Cognome e': %s ",i,d[i].cognome);
		printf("\nId[%d]Stipendio' e': %d \n",i,d[i].stipendio);
		
	}
	
	printf("\n----- Calcolo -----");
	printf("\nLo stipendio max e': %d",max);
	printf("\nLo stipendio min e': %d",min);
	printf("\nLa media dello stipendio e': %.2f",media/DIM);
	printf("\n-------------------");
	
	return 0;
}
