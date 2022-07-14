#include <stdio.h>

int main(){
        /*Dichiarazioni variabili*/
	int numero;
	int numeroIncrementato;
	int numeroDecrementato;
       
	 /* Richiesta all'utente di un numero */
	printf("Inserisci numero \n");
	scanf("%d" , &numero);
	
	/* Calcolo incremento/decremento*/
        numeroIncrementato= numero +1;
	numeroDecrementato= numero -1;

	/* Operzione di stampa a video*/
	printf("Numero incrementato: %d\n", numeroIncrementato);
	printf("Numero decrementato: %d\n" , numeroDecrementato);	

      	

return 0;

	
}
