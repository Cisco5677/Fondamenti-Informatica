#include<stdio.h>
#include<stdlib.h>


int main(){
	FILE *fp=fopen("input.txt","r");
	FILE *fp1=fopen("output.txt", "w");
	int numero;
	
	if (fp == NULL) {
    	printf("Errore nell'apertura del file\n");
        return 1;
    }
	printf("Lettura...\n");
	while(fscanf(fp, "%d", &numero) != EOF) {
        printf("%d\n", numero);
        fprintf(fp1, "%d\n", numero+1);
    }	
	printf("Calcolo...\n");
	
	fclose(fp);
	fclose(fp1);
	
	return 0;
}

