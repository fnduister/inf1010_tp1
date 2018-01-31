
//  client.h
//  Created by Martine Bellaiche on 18-01-22.
//  Copyright © 2018 Martine Bellaiche. All rights reserved.
//

#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include "panier.h"
using namespace std;
class Client
{
public:

	// methodes d'acces

	Client(const string& nom, const string& prenom, int identifiant, const string& codePostal, long dateNaissance);
	~Client();
	//Retourne nom du client
    string obtenirNom() const;

	//Retourne prenom du client
    string obtenirPrenom() const;

	//Retourne l'id du client
    int obtenirIdentifiant() const;

	//Retourne le code postal
    string obtenirCodePostal() const;

	//Retourne la date de naissaince
    long obtenirDateNaissance() const;
    
	//Modifie l'attribut avec la valeur passer en parametre
    void modifierNom(string nom) ;
    void modifierPrenom(string prenom) ;
    void modifierIdentifiant(int identifiant) ;
    void modifierCodePostal(string codePostal);
    void modifierDateNaissance(long date);
    
    // autres méthodes
    void acheter (Produit * prod);
    void afficherPanier() const;
    void livrerPanier() const;
	void afficher() const;
    
private:
    
    string nom_;
    string prenom_;
    int identifiant_;
    string codePostal_;
    long dateNaissance_;
    Panier * monPanier_;
};


#endif /* client_h */
