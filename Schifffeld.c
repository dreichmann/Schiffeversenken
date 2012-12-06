#include "schiff.h"
#include <stdint.h>
#include <stdio.h>

void feld(int**feld){

	**feld = feld [5][5];
	for(int i=0; i<8; i++) {
	// Schleife fuer Spalten, X-Achse
	for(int j=0; j<8; j++) {
		printf("x", feld[i][j]);
	}
	printf("\n");
}

}

void schiff(int form,int groeße, int anzahl,int senkrecht,int waagrecht,char feldangabe []){
	if(senkrecht==true){
		//mehrere abfragen wenn fünf dan blbaldas
	
	}else{
	printf("no senkrecht");
	
	{
	if(waagrecht==true){
	
	}else{
	printf("no waagrecht");
	
	{


	}



}

