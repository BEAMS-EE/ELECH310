//----------------------
// Corrigé labo 1 électronique numérique, 2015-2016
// Ken Hasselmann, ULB-BEAMS
//----------------------
#include <xc.h>
#include "CNAserie.h"
#include "lcd.h"
#include "init.h"
#include "clav.h"

//NOTE : code à compiler avec le compilateur XC16

int main(void)
{
	//NOTE : NE PAS ECRIRE DE CODE AVANT LES FONCTIONS D'INITIALISATION !
	init();
	Init_LCD();

	//config
	TRISDbits.TRISD7 = 1; //bouton RD7 en input
	TRISCbits.TRISC4 = 0; //pin RC4 de la carte en sortie (pour la led UB)
	TRISAbits.TRISA0 = 0; //pin RA0 en sortie, pour la LED sur la carte

	//pin en sortie
	TRISCbits.TRISC1 = 0;
	TRISCbits.TRISC2 = 0;

	//config timer 10kHz
	PR1 = 2000; //Freq 20kHz (2000 instructions à 40M instructions/s)
	//mais cela donne 10kHz sur la pin car on fait un changement d'état à chaque debordement
	T1CONbits.TCKPS = 0;
	T1CONbits.TON = 1;

	//config 2Hz (500ms) (derniere question)
	PR2 = 39063; //avec prescaler 256 : 4Hz, demi-periode 0.25ms, donc pin -> 500ms
	T2CONbits.TCKPS = 0b11; //prescaler 256
	T2CONbits.TON = 1;

	while(1)
	{
		if (!PORTDbits.RD7) //bouton appuyé (logique inversée)
		{
			LATCbits.LATC4 = 1; //led allumée
			LATAbits.LATA0 = 1;
		}
		else
		{
			LATCbits.LATC4 = 0;
			LATAbits.LATA0 = 0;
		}

		if (IFS0bits.T1IF) // Polling du flag d'interruption du timer 1
		{
			IFS0bits.T1IF = 0;// Reset du flag d'interruption
			LATCbits.LATC1 = !LATCbits.LATC1;// Inversion de l'état de la pin
		}

		if (IFS0bits.T2IF)
		{
			IFS0bits.T2IF = 0;
			LATCbits.LATC2 = !LATCbits.LATC2;
		}

	//Fonction longue permettant de lire la touche enfoncée sur le pavé alphanumérique et de l'affichier sur l'écran LCD
		//clav2LCD();

	}
}
