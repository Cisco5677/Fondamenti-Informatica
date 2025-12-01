#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int scelta;
    char testo[200];

    do {
        printf("\n----- MENU' -----\n");
        printf("1. Scrivere nel file\n");
        printf("2. Leggere dal file\n");
        printf("3. Esci\n");
        printf("------------------\n");
        printf("\nScegli un'opzione --> ");
        scanf("%d", &scelta);
        getchar(); // pulisce il buffer dopo scanf

        switch (scelta) {
            case 1:
                // SCRITTURA
                printf("Inserisci il testo da scrivere nel file: ");
                fgets(testo, sizeof(testo), stdin);
                fp = fopen("testo.txt", "a"); //apre il file in modalita scrittura 
                if (fp == NULL) {
                    printf("Errore apertura file per scrittura.\n");
                    break;
                }

                fputs(testo, fp); //inserisce il testo
                fclose(fp);

                printf("Testo scritto correttamente!\n");
                break;

            case 2:
                // LETTURA
                fp = fopen("testo.txt", "r");
                if (fp == NULL) {
                    printf("Errore apertura file per lettura (forse non esiste).\n");
                    break;
                }

                printf("\nContenuto del file:\n");
                while (fgets(testo, sizeof(testo), fp) != NULL) {
                    printf("%s", testo);
                }

                fclose(fp);
                break;

            case 3:
                printf("Uscita dal programma...\n");
                break;

            default:
                printf("Scelta non valida!\n");
        }

    } while (scelta != 3);

    return 0;
}

