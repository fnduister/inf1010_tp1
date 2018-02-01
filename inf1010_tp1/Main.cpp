/**************************************************
* Titre: Travail pratique #1 - Main.cpp
* Date: 20 janvier 2018
* Auteur: Mohammed Esseddik BENYAHIA
**************************************************/

#include "stdafx.h"

#include "Produit.h"
#include "Rayon.h"
#include "client.h"
#include "panier.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	//C'est à vous de voir si vous devez allouer dynamiquement ou non les élèments

	//1-  Creez 15 objets du classe produit
	Produit* produits = new Produit[15];


	//2-  Modifiez le nom, la référence, le prix de  troisieme objet Produit créé
	//   afficher les attributs de cet objet Produit
	produits[2].modifierNom("troisieme produit");
	produits[2].modifierReference(432);
	produits[2].modifierPrix(13.8);

	produits[2].afficher();
	std::cout << std::endl;

	
	//3-  Creez un objet de la classe rayon à l'aide du constructeur par défaut
	Rayon nouveauRayon;
   
	//4-  Modifiez la catégorie  du rayon
	nouveauRayon.modifierCategorie("nouvelle categorie");
   
    // 5- Ajouter 6 produits de  voret chaoix dans le rayon créé
	Produit amande("amande", 456, 12.5);
	nouveauRayon.ajouterProduit(&amande);

	Produit audi("audi", 658, 32658.2);
	nouveauRayon.ajouterProduit(&audi);

	Produit poly("poly", 6589, 12365.5);
	nouveauRayon.ajouterProduit(&poly);

	Produit mayo("mayo", 69854, 125.5);
	nouveauRayon.ajouterProduit(&mayo);

	Produit videotron("internet", 69, 12898.5);
	nouveauRayon.ajouterProduit(&videotron);

	Produit hydro("courant", 589, 1232.5);
	nouveauRayon.ajouterProduit(&hydro);

    // 6- afficher le contenu du rayon
	nouveauRayon.afficher();
  
	//7-  Creez un objet de classe client à l'aide du constructeur
	Client moi("allo","fabrice",1419733,"h2s2r2",29);

	//8-  afficher l'etat des attributs du client
	moi.afficher();

	std::cout << std::endl;

	//9-   Le client achete 9 produits
	moi.acheter(&mayo);
	moi.acheter(&videotron);
	moi.acheter(&hydro);
	moi.acheter(&audi);
	moi.acheter(&amande);
	moi.acheter(&hydro);
	moi.acheter(&videotron);
	moi.acheter(&amande);
	moi.acheter(&mayo);

	//10- Afficher le contenu du panier du client
	moi.afficherPanier();

     //11- livrer le panier du client
	moi.livrerPanier();

	//12- afficher le contenu du panier du client
	moi.afficherPanier();
    
	//13-  terminer le programme correctement
    
    return 0;
}
