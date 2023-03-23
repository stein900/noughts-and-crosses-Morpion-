

//morpion en c++

#include <iostream> 
#include <string> 

using namespace std;

// Initialiser le morpion 
char ticTacToe[3][3] =
{
	{ '1', '2', '3' },
	{ '4', '5', '6' },
	{ '7', '8', '9' }
};

// Fonction pour afficher le morpion 
void afficherMorpion()
{
	cout << "Voici le morpion actuel \n\n";

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << ticTacToe[i][j] << " ";
		}
		cout << endl;
	}
}

// Fonction pour prendre les entrées 
void prendreEntree(char choix, char joueur)
{
	if (choix == '1' && ticTacToe[0][0] == '1')
		ticTacToe[0][0] = joueur;
	else if (choix == '2' && ticTacToe[0][1] == '2')
		ticTacToe[0][1] = joueur;
	else if (choix == '3' && ticTacToe[0][2] == '3')
		ticTacToe[0][2] = joueur;
	else if (choix == '4' && ticTacToe[1][0] == '4')
		ticTacToe[1][0] = joueur;
	else if (choix == '5' && ticTacToe[1][1] == '5')
		ticTacToe[1][1] = joueur;
	else if (choix == '6' && ticTacToe[1][2] == '6')
		ticTacToe[1][2] = joueur;
	else if (choix == '7' && ticTacToe[2][0] == '7')
		ticTacToe[2][0] = joueur;
	else if (choix == '8' && ticTacToe[2][1] == '8')
		ticTacToe[2][1] = joueur;
	else if (choix == '9' && ticTacToe[2][2] == '9')
		ticTacToe[2][2] = joueur;
	else
	{
		cout << "Votre choix n'est pas valide\n";

		joueur--;
	}
}

// Fonction pour déterminer le gagnant 
char gagnant()
{
	// Lignes horizontales 
	if (ticTacToe[0][0] == ticTacToe[0][1] &&
		ticTacToe[0][1] == ticTacToe[0][2])
		return ticTacToe[0][0];

	if (ticTacToe[1][0] == ticTacToe[1][1] &&
		ticTacToe[1][1] == ticTacToe[1][2])
		return ticTacToe[1][0];

	if (ticTacToe[2][0] == ticTacToe[2][1] &&
		ticTacToe[2][1] == ticTacToe[2][2])
		return ticTacToe[2][0];

	// Lignes verticales 
	if (ticTacToe[0][0] == ticTacToe[1][0] &&
		ticTacToe[1][0] == ticTacToe[2][0])
		return ticTacToe[0][0];

	if (ticTacToe[0][1] == ticTacToe[1][1] &&
		ticTacToe[1][1] == ticTacToe[2][1])
		return ticTacToe[0][1];

	if (ticTacToe[0][2] == ticTacToe[1][2] &&
		ticTacToe[1][2] == ticTacToe[2][2])
		return ticTacToe[0][2];

	// Diagonales 
	if (ticTacToe[0][0] == ticTacToe[1][1] &&
		ticTacToe[1][1] == ticTacToe[2][2])
		return ticTacToe[0][0];

	if (ticTacToe[2][0] == ticTacToe[1][1] &&
		ticTacToe[1][1] == ticTacToe[0][2])
		return ticTacToe[2][0];

	return '/';
}

// Fonction principale 
int main()
{
	char choix;
	int joueur = 1;
	char joueurSigne;

	do
	{
		afficherMorpion();

		joueur = (joueur % 2) ? 1 : 2;

		cout << "Joueur " << joueur << ", choisissez votre case: ";
		cin >> choix;

		joueurSigne = (joueur == 1) ? 'X' : 'O';

		prendreEntree(choix, joueurSigne);

		joueur++;

		char gagnant_ = gagnant();

		if (gagnant_ == 'X')
			cout << "Le joueur 1 a gagn\202 ";
		else if (gagnant_ == 'O')
			cout << "Le joueur 2 a gagn\202 ";
		else if (gagnant_ == '/' && joueur > 9)
			cout << "Match nul\n";

		system("cls");

	} while (gagnant() == '/' && joueur < 10);

	if (gagnant() == 'X' || gagnant() == 'O')
		afficherMorpion();

	return 0;
}



//Salut GitHub voici une explication plus en détail



//#include <iostream> 
//#include <string> 
//
//using namespace std;
//
//// Initialiser le morpion 
//char ticTacToe[3][3] =                                             //Cela signifie qu'une matrice de taille 3x3 nommée ticTacToe est créée et remplie avec les caractères 1 à 9. La matrice est représentée comme une grille de jeu de morpion.
//{
//	{ '1', '2', '3' },
//	{ '4', '5', '6' },
//	{ '7', '8', '9' }
//};
//
//// Fonction pour afficher le morpion 
//void afficherMorpion()
//{
//	cout << "Voici le morpion actuel \n\n";
//
//	for (int i = 0; i < 3; i++)                                //Cette ligne de code affiche un tableau 3x3 en C++. Elle est réalisée en utilisant une double boucle for. La première boucle for fait tourner une variable i de 0 à 2, et la seconde boucle for fait tourner une variable j de 0 à 2. La variable i sert à parcourir les lignes du tableau, et la variable j sert à parcourir les colonnes du tableau. La ligne cout affiche le contenu de chaque élément du tableau.
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << ticTacToe[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//// Fonction pour prendre les entrées 
//void prendreEntree(char choix, char joueur)
//{
//	if (choix == '1' && ticTacToe[0][0] == '1')                  //Cela veut dire que si le joueur choisit la première case (numérotée 1) et que la première case (ligne 0, colonne 0) est égale à '1' (signifiant qu'elle n'est pas occupée par un joueur), alors la première case est remplie par le joueur (qui peut être représenté par un 'X' ou un 'O').
//		ticTacToe[0][0] == joueur;
//	else if (choix == '2' && ticTacToe[0][1] == '2')
//		ticTacToe[0][1] == joueur;
//	else if (choix == '3' && ticTacToe[0][2] == '3')
//		ticTacToe[0][2] == joueur;
//	else if (choix == '4' && ticTacToe[1][0] == '4')
//		ticTacToe[1][0] == joueur;
//	else if (choix == '5' && ticTacToe[1][1] == '5')
//		ticTacToe[1][1] == joueur;
//	else if (choix == '6' && ticTacToe[1][2] == '6')
//		ticTacToe[1][2] == joueur;
//	else if (choix == '7' && ticTacToe[2][0] == '7')
//		ticTacToe[2][0] == joueur;
//	else if (choix == '8' && ticTacToe[2][1] == '8')
//		ticTacToe[2][1] == joueur;
//	else if (choix == '9' && ticTacToe[2][2] == '9')
//		ticTacToe[2][2] == joueur;
//	else
//	{
//		cout << "Votre choix n'est pas valide\n";
//
//		joueur--;
//	}
//}
//
//// Fonction pour déterminer le gagnant 
//char gagnant()
//{                                                         // pour comprendre c'est comme si la premiere colone aligne 00 01 02 la seconde en dessous 10 11 12  et la troisieme encore en dessous 20 21 22.
//	// Lignes horizontales 
//	if (ticTacToe[0][0] == ticTacToe[0][1] &&            //Cette ligne de code vérifie si la ligne du haut de la grille de morpion est complétée avec des symboles identiques. Si c'est le cas, cette ligne de code retourne le symbole qui a rempli la ligne.
//		ticTacToe[0][1] == ticTacToe[0][2])
//		return ticTacToe[0][0];
//
//	if (ticTacToe[1][0] == ticTacToe[1][1] &&           //Cette ligne de code signifie que si les éléments dans la deuxième ligne du tableau ticTacToe sont égaux entre eux, la fonction renvoie la valeur de l'un des éléments de la deuxième ligne.
//		ticTacToe[1][1] == ticTacToe[1][2])
//		return ticTacToe[1][0];
//
//	if (ticTacToe[2][0] == ticTacToe[2][1] &&          //Cette ligne de code signifie que si les éléments dans la troisième ligne du tableau ticTacToe sont égaux entre eux, la fonction renvoie la valeur de l'un des éléments de la troisième ligne.
//		ticTacToe[2][1] == ticTacToe[2][2])
//		return ticTacToe[2][0];
//
//	// Lignes verticales 
//	if (ticTacToe[0][0] == ticTacToe[1][0] &&
//		ticTacToe[1][0] == ticTacToe[2][0])
//		return ticTacToe[0][0];
//
//	if (ticTacToe[0][1] == ticTacToe[1][1] &&
//		ticTacToe[1][1] == ticTacToe[2][1])
//		return ticTacToe[0][1];
//
//	if (ticTacToe[0][2] == ticTacToe[1][2] &&
//		ticTacToe[1][2] == ticTacToe[2][2])
//		return ticTacToe[0][2];
//
//	// Diagonales 
//	if (ticTacToe[0][0] == ticTacToe[1][1] &&
//		ticTacToe[1][1] == ticTacToe[2][2])
//		return ticTacToe[0][0];
//
//	if (ticTacToe[2][0] == ticTacToe[1][1] &&
//		ticTacToe[1][1] == ticTacToe[0][2])
//		return ticTacToe[2][0];
//
//	return '/';
//}
//
//// Fonction principale 
//int main()
//{
//	char choix;
//	int joueur = 1;
//	char joueurSigne;
//
//	do
//	{
//		afficherMorpion();
//
//		joueur = (joueur % 2) ? 1 : 2;          //Cette ligne de code signifie que le numéro du joueur est déterminé par un opérateur ternaire : si le modulo de la variable joueur par 2 est égal à 0, alors le joueur est le joueur 1, sinon le joueur est le joueur 2.
//
//		cout << "Joueur " << joueur << ", choisissez votre case: ";
//		cin >> choix;
//
//		joueurSigne = (joueur == 1) ? 'X' : 'O';             // Cette ligne de code en C++ signifie que le signe du joueur est déterminé par une expression conditionnelle. Si la valeur de "joueur" est égale à 1, le signe du joueur sera "X", sinon le signe du joueur sera "O".
//
//		prendreEntree(choix, joueurSigne);                  //prendreEntree(choix, joueurSigne) est une fonction qui permet à un joueur de choisir son signe (O ou X) et de sélectionner une case dans le jeu de Morpion. Elle prend en paramètres le choix du joueur (Case 1, Case 2, Case 3, etc.) et le signe sélectionné par le joueur (O ou X).
//
//		joueur++;                                       //En C++, "joueur++" est une instruction d'incrémentation qui ajoute 1 à la variable joueur. Cela signifie que si la variable joueur était initialement égale à 5, elle serait désormais 6.
//
//		char gagnant_ = gagnant();
//
//		if (gagnant_ == 'X')                               //Cela signifie que si le joueur 1 a gagné (déterminé par la variable gagnant_), le programme affichera un message indiquant que le joueur 1 a gagné.
//			cout << "Le joueur 1 a gagn\202 ";
//		else if (gagnant_ == 'O')                         //Cela signifie que si le joueur 2 a gagné (déterminé par la variable gagnant_), le programme affichera un message indiquant que le joueur 2 a gagné.
//			cout << "Le joueur 2 a gagn\202 ";
//		else if (gagnant_ == '/' && joueur > 9)           //Cette ligne de code signifie que si gagnant est egale au symbole '/' et que le nombre joueur est supérieur à 9, alors le résultat du jeu est un match nul.
//			cout << "Match nul\n";
//
//	} while (gagnant() == '/' && joueur < 10);            //Cette phrase est une condition pour une boucle while (boucle tant que). Elle signifie que la boucle doit continuer à s'exécuter tant que la fonction gagnant() retourne ' / ' ET que le compteur joueur est inférieur à 10.                //il y avais gagnant_ a la palce de gagnant() , c'est pourquoi "match nul" marche pas
//
//	if (gagnant() == 'X' || gagnant() == 'O')              //il y avais gagnant_ a la palce des gagnant() , c'est pourquoi "match nul" marche pas
//		afficherMorpion();
//
//	return 0;
//}