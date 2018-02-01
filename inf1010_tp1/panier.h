
//  panier.cpp
//  Created by Martine Bellaiche on 18-01-22.
//  Copyright © 2018 Martine Bellaiche. All rights reserved.
//

#include <string>
#include "Produit.h"

#ifndef PANIER_H
#define PANIER_H
class Panier
{
public:
    Panier (int capacite);
	//méthodes d'acces

	//Retourne un pointeur contenant les pointeurs des produits dans le panier
    Produit **  obtenirContenuPanier() const;

	//Retourne le nombre de produit dans le panier
    int obtenirNombreContenu() const;

	//Retourne le montant total à payer dans le panier
	//Retourne 0 si le panier est vide
    double obtenirTotalApayer();
    
    // méthodes de modification
    
	//Ajoute un produit dans le panier
    void ajouter (Produit * prod);

	//Désalloue le tableau du panier et initialise les autre paramétres 
    void livrer();

	//Afficher le contenu du panier
    void afficher();

private:
    
    Produit ** contenuPanier_;
    int  nombreContenu_;
    int capaciteContenu_;
    double totalAPayer_;

	// autres methodes

	// double la capacite du tableau de produit
	// Initialise a 2 la capacite 
	void doublerCapacite();

};

#endif

