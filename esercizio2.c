#include <stdio.h>

int main (){
	//Spiegazione Esercizio
	printf("Inserire due numeri per calcolo della media \n");
	        
       //creazione variabili
     

	float primonumero;
	float secondonumero;
	float calcolomedia;



	//inserimento numeri
	printf("Inserisci il  primo Numero: \n");
	scanf("%f", &primonumero);

	printf("Inserisci il secondo Numero: \n");
	scanf("%f", &secondonumero);

	//operazione del calcolo della media

	calcolomedia = (primonumero + secondonumero)/2;

	//il risultato della media stampato a videp

	printf("La media dei due numeri è: %f", calcolomedia);

}
