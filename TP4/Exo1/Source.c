#include "tp4.h"

int main()
{
	HEURE HeureDebut = { 12,30 }, HeureFin, Duree = { 00,45 }; //on définit les variables
	HeureFin.heure = HeureDebut.heure + Duree.heure;
	HeureFin.minute = HeureDebut.minute + Duree.minute; // on additionne les heures et les minutes

	//Mais si le nombre des minutes est supérieur à 60 on ajoute +1 au nombre d'heures et le reste va dans les minutes

	if (HeureFin.minute >= 60)
	{
		HeureFin.minute = HeureFin.minute % 60;
		HeureFin.heure += 1;
	}

	//Si le nombre des heures est plus grand que 24, on retire 24 au nombre des heures et le reste va dans les heures
	if (HeureFin.heure >= 24)
	{
		HeureFin.heure = HeureFin.heure % 24;
	}
	printf("L'heure de fin est donc %d : %d", HeureFin.heure, HeureFin.minute);
}