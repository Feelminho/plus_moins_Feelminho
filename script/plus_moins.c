#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void plus_moins(int choix_joueur, int valeur_a_trouver)
{
	if(choix_joueur < valeur_a_trouver)
		printf("plus\n");
	else if(choix_joueur > valeur_a_trouver)
		printf("moins\n");
	else
		printf("BingO!!! :)\n");
}
int main ()
{
	srand(time(NULL));
	int a=rand()%100;
	int nenazy, limit,essai,valiny;
	printf("Ino tianao basy?\n 1-Facile\n 2-Moyen\n 3-Difficile\n");
	scanf("%d",&valiny);
	if (valiny==1)
		limit = 1000000000;
	else if (valiny==2)
		limit=25;
	else
		limit=10;
	essai=0;

	while ((essai<=limit) && (nenazy!=a))
	{
	printf("Devine le chiffre auquel je pense basy\n");
	scanf("%d",&nenazy);
	plus_moins(nenazy,a);
	essai++;
	}
}
