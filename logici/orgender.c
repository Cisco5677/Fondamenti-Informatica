#include<stdio.h>

struct clienti{
	int age;
	char gender;
};

int main(){
	
	struct clienti c1;
	
	printf("--- Biglietteria ---\n\n");
	printf("Inserisci l'eta' --> ");
	scanf("%d", &c1.age);
	getchar();
	printf("Insersci il tuo genere (M/F) --> ");
	c1.gender = getchar();
	
	
	if(c1.age<=18 || c1.gender=='F'){
		printf("\nPuoi Entrare!!");
	}else{
		printf("\nNon puoi entrare!!!");
	}
	
	return 0;
}
