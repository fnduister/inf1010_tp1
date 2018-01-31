/********************************************
* Titre: Travail pratique #1 -Rayon.h
* Date: 20 janvier 2018
* Auteur: 
*******************************************/

#ifndef RAYON_H
#define RAYON_H

#include <string>
#include "Produit.h"
using namespace std;

class Rayon
{
public:
	// Constructeurs par defaut et par parametres
	Rayon();
	Rayon(const string& cat);

	//Retourne la categorie du rayon
	string obtenirCategorie() const;

	//Retourne un tableau de pointeur des produits du rayon
	Produit ** obtenirTousProduits() const;

	//Retourne la capacité du tableau de pointeur
	int obtenirCapaciteProduits() const;

	//Retourne le nombre de produits contenus dans le rayon
	int obtenirNombreProduits() const;


	// Methodes de modification
	void modifierCategorie(const string& cat);

	//augmente de 5 la capacité du rayon
	//Initialise à 5 la capacité du tableau si elle est vide
	//Désalloue le contenu du tableau une fois copie
	void augmenterCapacite();

	//Ajoute un produit au rayon
	//Augmente la taille du tableau de pointeur si la capacité totale est atteinte
    void ajouterProduit (Produit * produit);

	//Affiche le contenu du rayon
    void afficher() const;
	

private:

	// Attributs prives
	string categorie_;
    Produit ** tousProduits_;
    int capaciteProduits_;
	int nombreProduits_;

};
#endif
