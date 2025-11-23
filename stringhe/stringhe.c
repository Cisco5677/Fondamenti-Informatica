/* STRINGE = Array di caratteri per indicare la fine stringa si fa con "\0" 
length=!dim  */

#include<stdio.h>
#include<string.h>
#define DIM 20

void leggiStringa (char str[], int dim) {
    fgets(str, dim, stdin);
    if (str[strlen(str)-1]=='\n')
        str[strlen(str)-1]='\0';
    else
        while (getchar()!='\n');
}

int main(){
	
  char username[DIM];
  char password[DIM];
  char username2[DIM];
  char password2[DIM];
  
  int autenticazione,i,controllo=0;
  
/*	printf("\nInserisci l'Username : ");
	leggiStringa(username, DIM);
	printf("Inserisci la Password : ");
	leggiStringa(password, DIM);*/
  do{
  printf("\nFai il Login!\n");
  printf("Inserisci l'Username : ");
  leggiStringa(username2, DIM);
  printf("Inserisci la Password : ");
  leggiStringa(password2, DIM);

  printf("\nusername = %s\n", username);
  printf("password = %s\n", password);
  
  for(i=0;i<DIM; i++){
		if(username[i]==username2[i]){
		}
		else{
			controllo=1;
		}
		
		if(password[i]==password2[i]){
		}
		else{
			controllo=1;
		}
  }
  
	  if(controllo==0){
	  	printf("Ti sei autenticato");
	  }else{
	  	printf("Username o password non coretta!\n");
	  }
  }while(controllo==1);
  
  //printf("lunghezza username = %lu\n", strlen(username));
  return 0;
}
