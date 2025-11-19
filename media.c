#include<stdio.h>

float somma;

float media(float n1, float n2){
	somma=n1+n2;
	return somma/2; //casting ---> (float) somma/2; obbligare un'operazione ad essere di un certo tipo in questo casto float.
}



int main(){
	
	float ris,n1,n2;
	
	printf("Inserisci il primo numero: ");
	scanf("%f",&n1);
	printf("Inserisci il secondo numero: ");
	scanf("%f",&n2);
	
	ris=media(n1,n2);
	printf("La media dei due numeri e' = %.2f",ris);
	
	return 0;
}
