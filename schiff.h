#define  true 1
#define false  0
//Kill ALL HUMANS!
struct{
	int feld[5][5];
	int form;
	int senkrecht;
	int waagrecht;
	int groe�e;
	int anzahl;
	char feldangabe[3];
}

void feld(int**feld);

void schiff(int form,int groe�e, int anzahl,int senkrecht,int waagrecht,char feldangabe[]);