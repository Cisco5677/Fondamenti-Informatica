#include<stdio.h>
#define N 3

struct Studente{
	int matricola;
	int voto;
	int cfu;
	
};

int inserisci_studente(struct Studente v[], int n){
	int i;
	
	for(i=0;i<n;i++){
		printf("Inserisci la %d^ matricola dello studente: ",i);
		scanf("%d",&v[i].matricola);
		do{
			printf("Inserisci il voto del %d^ studente: ",i);
			scanf("%d",&v[i].voto);
		}while(v[i].voto<18 || v[i].voto>30);
		printf("Inserisci i CFU del %d^ studente: ",i);
		scanf("%d",&v[i].cfu);
	}
}

void stampa_studenti(struct Studente v[], int n){
	int i;
	printf("\n---- Stampa Studenti ----\n");
	for(i=0;i<n;i++){
		printf("La %d^ matricola dello studente e': %d\n",i,v[i].matricola); 
		printf("Il voto del %d^ studente e': %d\n",i,v[i].voto);
		printf("I CFU del %d^ studente sono: %d\n",i,v[i].cfu);
	}
}

float media_voti(struct Studente v[], int n){
	float somma,media;
	int i;
	printf("\n---- Stampa Media ----\n\n");
	for(i=0;i<n;i++){
		somma+=v[i].voto;
	}
	media=somma/n;
	printf("La media dei voti e': %.f\n\n",media);
	return media;
}

int cerca_per_matricola(struct Studente v[], int n, int matricola){
	int i,trovato=-1;
	int cerca;
	printf("\n---- Ricerca Studenti ----\n\n");
	printf("Inserisci la matricola da cercare: ");
	scanf("%d",&cerca);
	
	for(i=0;i<n;i++){
		if(cerca==v[i].matricola){trovato=i;}
	}
	printf("Matricola trovata questo e' il suo indice: %d\n\n",trovato);
	return trovato;
}

int indice_voto_massimo(struct Studente v[], int n){
	int i,max=v[0].voto,j;
	printf("\n---- Stampa Voto Massimo ----\n");
	for(i=0;i<n; i++){
		if (v[i].voto > max){
			max = v[i].voto;
			j=i;
		}
	}
	printf("\nIl voto massimo e': %d",max);
	printf("\nLa sua matricola e': %d",v[j].matricola);
	printf("\nE i suoi cfu sono: %d\n\n",v[j].cfu);
	
	return j;
}

int main(){
	int scelta,indice,j;
	float media;
	
	struct Studente alunno[N];
	do{
		printf("\n----------------Menu'----------------\n");
		printf("1) Inserisci un nuovo studente\n2) Stampa tutti gli studenti\n3) Calcola e stampa la media dei voti\n4) Cerca studente per matricola\n5) Trova e stampa lo studente con il voto massimo\n0) Esci.\n");
		printf("\n--------------------------------\n");
		printf("\nInserisci la scelta----> ");
		scanf("%d", &scelta);
		switch(scelta){
			case 0:
			break;
			case 1:
				inserisci_studente(alunno,N);
			break;
			case 2:
				stampa_studenti(alunno, N);
			break;
			case 3:
				media=media_voti(alunno, N);
			break;
			case 4:
				indice=cerca_per_matricola(alunno,N,alunno[N].matricola);
			break;
			case 5:
				j=indice_voto_massimo(alunno,N);
			break;
		}
			
	}while(scelta!=0);
	
	return 0;
}
