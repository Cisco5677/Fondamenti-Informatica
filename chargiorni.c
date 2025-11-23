#include<stdio.h>

/* tipi di variabili ---> int,float,double,char char carattere='Z'; scanf("%c", &carattere);
	printf("La lettera inserita e': %c",carattere); */

int main(){
		
	char giorno;
	
		printf("Inserisci un giorno (l,m,g,v,s,d) ---> ");
		giorno=getchar();
		switch(giorno){
		
		case 'l': 
			printf("Lunedi");
		break;
		case 'm':
			printf("Martedi");
		break;
		case 'g':
			printf("Giovedi");
		break;
		case 'v':
			printf("Venerdi");
		break;
		case 's':
			printf("Sabato");
		break;
		case 'd':
			printf("Domenica");
		break;
		
		default: printf("\nLettera non valida!!"); 
	}
	
	
}
