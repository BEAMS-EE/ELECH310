	//--------------------------------------------------------------	
	//INCLUDES
	//--------------------------------------------------------------//

#include <p33FJ256GP710.h>
#include "init.h"
#include "lcd.h"


	//--------------------------------------------------------------	
	//VARIABLES GLOBALES
	//--------------------------------------------------------------//
	
int rapportCycl(double r) {
	return PR2*r;
}	

int main(void)
{
	//--------------------------------------------------------------	
	//Définitions de vos variables
	//--------------------------------------------------------------

	//--------------------------------------------------------------	
	//INITIALISATION DE LA CARTE
	//--------------------------------------------------------------
	init();
	
	PR2=4000;//4000 -> 100µs@40MHz
	//OC1RS=1600;//1600 -> 40% de 4000
	OC1RS=rapportCycl(0.8);
	TRISDbits.TRISD0=0;//Patte en sortie
	OC1CONbits.OCTSEL=0;//On se base sur le timer 2 (->0), le timer 3 étant "1"
	OC1CONbits.OCM=0b110;//"0bx" -> donne la valeur suivant "0b" en bits. "110" -> PWN sans détection d'erreur
	T2CONbits.TON=1;//Lancement du timer 2

	//--------------------------------------------------------------	
	//ECRIRE ICI VOTRE CODE D'INITIALISATION DES PERIPHERIQUES
	//--------------------------------------------------------------//
	Init_LCD();
	LCD_Print("LABO307");

	while(1)
	{
	//--------------------------------------------------------------	
	//ROUTINE PRINCIPALE DU PROGRAMME
	//--------------------------------------------------------------//
		
	
	}
}

