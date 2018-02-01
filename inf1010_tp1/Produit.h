/********************************************
* Titre: Travail pratique #1 - Produit.h
* Date: 20 janvier 2018
* Auteur: Mohammed Esseddik BENYAHIA
*******************************************/

#ifndef PRODUIT_H
#define PRODUIT_H

#include <string>
#include <iostream>
using namespace std;

class Produit
{
public:
	// Constructeurs par defaut
	Produit();

	// Constructeurs et par parametres
	Produit(string nom, int reference, double prix);

	// Retourne le nom du produit
	string obtenirNom() const;

	// Retourne la reference du produit
	int obtenirReference() const;

	// Retourne le prix du produit
	double obtenirPrix() const;

	void modifierNom(const string& nom);
	void modifierReference(const int& reference);
	void modifierPrix(const double& prix);
   
    /// autres methodes

	// Afficher les informations du produit
    void afficher() const;
   
private:

	// attributs prives
	string nom_;
	int reference_;
    double prix_;
};

#endif
