#include <stdio.h>

int main(){
        //Dichiarazioni variabili
	int numero;
	int numeroIncrementato;
	int numeroDecrementato;
       
	 // Insserimeneto numero da incrementare e decrementare
	printf("Inserisci numero \n");
	scanf("%d" , & numero);
	
	//Operazione incremento
        numeroIncrementato= numero +1;
	
	//Stampo a video incremento
	printf("Numero incrementato: %d\n", numeroIncrementato);
	
	//Operazione decremento
	numeroDecrementato= numero -1;

	//Stampa a video decremento
	printf("Numero decrementato: %d\n" , numeroDecrementato);	

      	

return 0;

	
}
