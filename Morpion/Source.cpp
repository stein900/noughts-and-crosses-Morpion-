

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

// Fonction pour prendre les entr�es 
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

// Fonction pour d�terminer le gagnant 
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



//Salut GitHub voici une explication plus en d�tail



//#include <iostream> 
//#include <string> 
//
//using namespace std;
//
//// Initialiser le morpion 
//char ticTacToe[3][3] =                                             //Cela signifie qu'une matrice de taille 3x3 nomm�e ticTacToe est cr��e et remplie avec les caract�res 1 � 9. La matrice est repr�sent�e comme une grille de jeu de morpion.
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
//	for (int i = 0; i < 3; i++)                                //Cette ligne de code affiche un tableau 3x3 en C++. Elle est r�alis�e en utilisant une double boucle for. La premi�re boucle for fait tourner une variable i de 0 � 2, et la seconde boucle for fait tourner une variable j de 0 � 2. La variable i sert � parcourir les lignes du tableau, et la variable j sert � parcourir les colonnes du tableau. La ligne cout affiche le contenu de chaque �l�ment du tableau.
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << ticTacToe[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//// Fonction pour prendre les entr�es 
//void prendreEntree(char choix, char joueur)
//{
//	if (choix == '1' && ticTacToe[0][0] == '1')                  //Cela veut dire que si le joueur choisit la premi�re case (num�rot�e 1) et que la premi�re case (ligne 0, colonne 0) est �gale � '1' (signifiant qu'elle n'est pas occup�e par un joueur), alors la premi�re case est remplie par le joueur (qui peut �tre repr�sent� par un 'X' ou un 'O').
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
//// Fonction pour d�terminer le gagnant 
//char gagnant()
//{                                                         // pour comprendre c'est comme si la premiere colone aligne 00 01 02 la seconde en dessous 10 11 12  et la troisieme encore en dessous 20 21 22.
//	// Lignes horizontales 
//	if (ticTacToe[0][0] == ticTacToe[0][1] &&            //Cette ligne de code v�rifie si la ligne du haut de la grille de morpion est compl�t�e avec des symboles identiques. Si c'est le cas, cette ligne de code retourne le symbole qui a rempli la ligne.
//		ticTacToe[0][1] == ticTacToe[0][2])
//		return ticTacToe[0][0];
//
//	if (ticTacToe[1][0] == ticTacToe[1][1] &&           //Cette ligne de code signifie que si les �l�ments dans la deuxi�me ligne du tableau ticTacToe sont �gaux entre eux, la fonction renvoie la valeur de l'un des �l�ments de la deuxi�me ligne.
//		ticTacToe[1][1] == ticTacToe[1][2])
//		return ticTacToe[1][0];
//
//	if (ticTacToe[2][0] == ticTacToe[2][1] &&          //Cette ligne de code signifie que si les �l�ments dans la troisi�me ligne du tableau ticTacToe sont �gaux entre eux, la fonction renvoie la valeur de l'un des �l�ments de la troisi�me ligne.
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
//		joueur = (joueur % 2) ? 1 : 2;          //Cette ligne de code signifie que le num�ro du joueur est d�termin� par un op�rateur ternaire : si le modulo de la variable joueur par 2 est �gal � 0, alors le joueur est le joueur 1, sinon le joueur est le joueur 2.
//
//		cout << "Joueur " << joueur << ", choisissez votre case: ";
//		cin >> choix;
//
//		joueurSigne = (joueur == 1) ? 'X' : 'O';             // Cette ligne de code en C++ signifie que le signe du joueur est d�termin� par une expression conditionnelle. Si la valeur de "joueur" est �gale � 1, le signe du joueur sera "X", sinon le signe du joueur sera "O".
//
//		prendreEntree(choix, joueurSigne);                  //prendreEntree(choix, joueurSigne) est une fonction qui permet � un joueur de choisir son signe (O ou X) et de s�lectionner une case dans le jeu de Morpion. Elle prend en param�tres le choix du joueur (Case 1, Case 2, Case 3, etc.) et le signe s�lectionn� par le joueur (O ou X).
//
//		joueur++;                                       //En C++, "joueur++" est une instruction d'incr�mentation qui ajoute 1 � la variable joueur. Cela signifie que si la variable joueur �tait initialement �gale � 5, elle serait d�sormais 6.
//
//		char gagnant_ = gagnant();
//
//		if (gagnant_ == 'X')                               //Cela signifie que si le joueur 1 a gagn� (d�termin� par la variable gagnant_), le programme affichera un message indiquant que le joueur 1 a gagn�.
//			cout << "Le joueur 1 a gagn\202 ";
//		else if (gagnant_ == 'O')                         //Cela signifie que si le joueur 2 a gagn� (d�termin� par la variable gagnant_), le programme affichera un message indiquant que le joueur 2 a gagn�.
//			cout << "Le joueur 2 a gagn\202 ";
//		else if (gagnant_ == '/' && joueur > 9)           //Cette ligne de code signifie que si gagnant est egale au symbole '/' et que le nombre joueur est sup�rieur � 9, alors le r�sultat du jeu est un match nul.
//			cout << "Match nul\n";
//
//	} while (gagnant() == '/' && joueur < 10);            //Cette phrase est une condition pour une boucle while (boucle tant que). Elle signifie que la boucle doit continuer � s'ex�cuter tant que la fonction gagnant() retourne ' / ' ET que le compteur joueur est inf�rieur � 10.                //il y avais gagnant_ a la palce de gagnant() , c'est pourquoi "match nul" marche pas
//
//	if (gagnant() == 'X' || gagnant() == 'O')              //il y avais gagnant_ a la palce des gagnant() , c'est pourquoi "match nul" marche pas
//		afficherMorpion();
//
//	return 0;
//}