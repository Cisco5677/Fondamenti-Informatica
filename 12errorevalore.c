#include <stdio.h>

/* Controllo dell'input del voto */

int main() {
	
	int voto=0;
	printf("Inserisci il voto: ");
	scanf("%d", &voto);
	
	while(voto<0 || voto>10){
		printf("Errore! Inserisci nuovamente il voto tra(0 e 10): ");
		scanf("%d", &voto);
	}
	
	if(voto>=6){
		printf("L'alunno e' promosso con: %d", voto);
	} else{
		printf("L'alunno e' bocciato con: %d", voto);
	}
	
	return 0;
}
