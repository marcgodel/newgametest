#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkNiveauDeDifficulte (int niveauDeDifficulte)
{
if (niveauDeDifficulte <=0)
	return 0;
else if (niveauDeDifficulte >=5)
	return 0;
else
	return 1;
}


/*fonction
 cree un nombre aleatoire selon le niveau*/
int creatNumber (int) //parametre nombreMax
{

}




int main()
{

int niveauDeDifficulte=0;
int nombreATrouverJoueur1=0;
int nombreATrouverJoueur=0;
int nombreDessaisJoueur1=0;
int nombreDessaisJoueur=0;
int nombreDeJoueur=0;

printf ("Le jeux du nombre caché !\n\n");
printf ("Voulez-vous jouer à 1 ou 2 joueur?\n");
scanf ("%d", &nombreDeJoueur);


while (nombreDeJoueur !=1 && nombreDeJoueur !=2)
{
printf("rechoisi, 1 ou 2 joueur\n");
scanf("%d", &nombreDeJoueur);
}


if (nombreDeJoueur == 1)
{
printf("tu joue en solo !");
}
else if (nombreDeJoueur == 2)
{
printf("C'est parti à 2 !\n");
}
else
{
printf("erreur");
}

printf("maintenant tu peux choisir le niveau de difficulté\nDu niveau 1 (le plus facile) au niveau 4\n");
scanf("%d", &niveauDeDifficulte);

int checkNiv =0;
checkNiv = checkNiveauDeDifficulte(niveauDeDifficulte);

while (checkNiv !=1)
{
printf("vous avez choisi un niveau inexistant!\nveuillez choisir le niveau 1,2,3 ou 4!\n");
scanf("%d", &niveauDeDifficulte);
checkNiv = checkNiveauDeDifficulte(niveauDeDifficulte);
}


switch (niveauDeDifficulte)
{
	case 1: printf("tu as choisi le niveau %d !\n", niveauDeDifficulte);break;

	case 2: printf("tu as choisi le niveau %d !\n", niveauDeDifficulte);break;

	case 3: printf("tu as choisi le niveau %d !\n", niveauDeDifficulte);break;

	case 4: printf("tu as choisi le niveau %d !\n", niveauDeDifficulte);break;
}


return 0;
}
