#include <stdio.h>

int main(){
	int d, m,r;
	char imie[20];
	char nazw[30];
	printf("Podaj imie ");
	scanf("%s", imie);
	printf("Podaj nazwisko ");
	scanf("%s", nazw);
	printf("Podaj dzien urodzin ");
	scanf("%d", &d);
	printf("Podaj miesiac urodzin ");
	scanf("%d", &m);
	printf("Podaj rok urodzenia ");
	scanf("%d", &r);
	printf("Osoba: %s %s, urodzona: %d-%d-%d\n", imie, nazw, d, m, r);
	printf("Koniec dzialania\n");
	return 0;
}
