#include<stdio.h>

float calcola_media(float a[], int n){
	int i;
	float somma;
	
	for(i=0;i<n; i++){
		somma+=a[i];
	}
	
	float media=somma/n;
	
	return media;
}

float trova_massimo(float a[], int n){
	int i,max=a[0];
	
	for(i=0;i<n; i++){
		if (a[i] > max) max = a[i];
	}
	return max;
}

float trova_minimo(float a[], int n){
	int i,min=a[0];
	
	for(i=0;i<n; i++){
		if (a[i] < min) min = a[i];
	}
	return min;
}

int conta_maggiori_di_media(float a[], int n){
	int count,i;
	float somma,media;
	
	for(i=0;i<n; i++){
		somma+=a[i];
	}
	
	media=somma/n;
	
	for(i=0;i<n;i++){
		if(a[i]>media){
			count++;
		}
	}
	return count;
}

int main(){
	int n,i;
	
	do{
		printf("Inserisci il numero di giorni tra (1,31)--> ");
		scanf("%d",&n);
	}while(n<=1 || n>=31);
	
	float a[n];
	for(i=0;i<n;i++){
		printf("Inserisci la temperatura del %d^ giorno: ",i);
		scanf("%f",&a[i]);
	}
	printf("\n---- Stampo i risulatati ----\n");
	printf("\nLa media delle temperature e': %.2f",calcola_media(a,n));
	printf("\nIl valore max=%.2f e il valore min=%.2f",trova_massimo(a,n),trova_minimo(a,n));
	printf("\nI giorni che hanno una temperatura maggiore della media sono: %d",conta_maggiori_di_media(a,n));
	printf("\n\n------------------------------\n");
	
	return 0;
}
