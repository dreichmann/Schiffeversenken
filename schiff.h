#define  true 1
#define false  0
struct{
	int feld[5][5];
	int form;
	int senkrecht;
	int waagrecht;
	int groeﬂe;
	int anzahl;
	char feldangabe[3];
}

void feld(int**feld);

void schiff(int form,int groeﬂe, int anzahl,int senkrecht,int waagrecht,char feldangabe[]);