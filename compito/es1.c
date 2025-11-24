#include <stdio.h>

int main() {
    int n;
    int count = 0;
    int somma = 0;
    float media;
    int max, min;
    int pari = 0, dispari = 0;

    printf("Inserisci un numero (0 per terminare): ");
    scanf("%d", &n);
    max = n;
    min = n;

    do{
        count++;
        somma += n;
        if (n % 2 == 0){
			pari++;
		}else{
			dispari++;
		}
        if (n > max)
            max = n;
        if (n < min)
            min = n;
        printf("Inserisci un numero (0 per terminare): ");
        scanf("%d", &n);
    }while(n!=0);

    media = (float)somma / count;

    printf("\n--- RISULTATI ---\n");
    printf("I numeri inseriti sono: %d\n", count);
    printf("La somma dei numeri e': %d\n", somma);
    printf("La media dei numeri e': %.2f\n", media);
    printf("Il valore max=%d e il valore min=%d\n", max,min);
    printf("I numeri pari sono %d e i numeri dispari sono %d\n", pari,dispari);

    return 0;
}

