#include <stdio.h>

int main (){
	/* Dichiarazione variabile */
	int numero;

	/* Richiesra all' utente di un numero*/
	printf("Inserisci il numero \n");
	scanf("%d", &numero);
	
	/* Istruzione di controllo per verificare se il numero inserito è positivo o negativo*/
	if(numero >= 0){
			printf("Il numero inserito è positivo \n");
		}

	else{
		printf("Il numero inserito è negativo \n");

	}	


	
}

