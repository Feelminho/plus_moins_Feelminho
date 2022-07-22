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

int player_mode(int player)
{
	srand(time(NULL));
        int b=rand()%100;
        int limit2;
        printf("joueur%d choisit le nombre d'essai, minimum 10: \n",player);
        scanf("%d",&limit2);
        int essai=0;
        int point,nenazy;
        point = limit2;
        while ((essai<=limit2) && (nenazy!=b))
        {
      	    printf("Devine le chiffre auquel je pense basy\n");
            scanf("%d",&nenazy);
            plus_moins(nenazy,b);
            essai++;
            point--;
	}
	return point;
}
int main ()
{
	srand(time(NULL));
	int a=rand()%100;
	int mode;
	printf("mode: \n 1-solo\n 2-2joueurs\n");
	scanf("%d",&mode);
	if (mode==1)
	{
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
	else 
	{
		int tour;
		printf("COmbien de tour\n");
		scanf("%d",&tour);
		int point_joueur1=0;
		int point_joueur2=0;
		for (int partie=1; partie<=tour; partie++)
			{
				printf("Partie: %d\n",partie);
				point_joueur1 += player_mode(1);
				point_joueur2 += player_mode(2);
        	        }
		if (point_joueur1<point_joueur2)
			printf("Score: %d : %d => Félicitation, Joueur2\n",point_joueur1,point_joueur2);
		else if (point_joueur1>point_joueur2)
			printf("Score: %d : %d => Félicitation, Joueur1\n",point_joueur1,point_joueur2);
		else
			printf("Score: %d : %d => Egalité\n",point_joueur1,point_joueur2);


	}

}
