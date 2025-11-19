#include<stdio.h>
#define N 5

/* 
	OR operatore logico 

*/

int main(){
	int age,ticket;
	
	printf("Inserisci l'eta --> ");
	scanf("%d", &age);
	printf("Inserisci il valore del ticket(50,20,15) --> ");
	scanf("%d", &ticket);
	
	if (age>=18 || ticket>50){
		printf("Puoi entrare!!");
	}else{
		printf("Non puoi entrare!!!");
	}
	return 0;
}
