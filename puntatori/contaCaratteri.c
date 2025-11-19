#include <stdio.h>
#define N 30

int contaCaratteri(char caratteri[N]) {
    int i = 0;
    int count = 0;

    // conta finché non trova il terminatore di stringa '\0'
    while (caratteri[i] != '\0') {
        count++;
        i++;
    }

    return count;
}

int main() {
    char car[N];

    printf("Inserisci una stringa: ");
    scanf("%s", car);  // legge una stringa senza spazi

    int c = contaCaratteri(car);

    printf("Numero di caratteri: %d\n", c);

    return 0;
}

