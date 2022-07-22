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
	int nenazy=0;

	while (nenazy != a)
	{
	printf("Devine le chiffre auquel je pense basy\n");
	scanf("%d",&nenazy);
	plus_moins(nenazy,a);
	}
}
