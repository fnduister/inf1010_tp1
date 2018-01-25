#include "stdafx.h"
#include "Rayon.h"

Rayon::Rayon():
	categorie_("inconnu"),
	tousProduits_(nullptr),
	capaciteProduits_(0),
	nombreProduits_(0)
{
}

Rayon::Rayon(string cat):
	categorie_(cat),
	tousProduits_(nullptr),
	capaciteProduits_(0),
	nombreProduits_(0)
{
}

int Rayon::obtenirNombreProduits() const
{
	return nombreProduits_;
}

void Rayon::modifierCategorie(string cat)
{
	categorie_ = cat;
}

void Rayon::augmenterCapacite()
{
	if (capaciteProduits_ < 1) {
		capaciteProduits_ = 5;
		tousProduits_ = new Produit*[capaciteProduits_];
	}
	else {
		capaciteProduits_ += 5;

		Produit** produits = new Produit*[capaciteProduits_];

		for (unsigned i = 0; i < nombreProduits_; ++i)
		{
			produits[i] = tousProduits_[i];
		}

		tousProduits_ = produits;
	}
}

void Rayon::ajouterProduit(Produit* produit)
{
	if (capaciteProduits_ == nombreProduits_)
		augmenterCapacite();
	tousProduits_[nombreProduits_] = produit;
	nombreProduits_++;
}

void Rayon::afficher() const
{
	std::cout << "liste des produits:" << std::endl;

	for (unsigned i = 0; i < nombreProduits_; ++i) {
		tousProduits_[i]->afficher();
		std::cout << "--------------" << std:: endl;
	}
}

string Rayon::obtenirCategorie() const
{
	return categorie_;
}

Produit ** Rayon::obtenirTousProduits() const
{
	return tousProduits_;
}

int Rayon::obtenirCapaciteProduits() const
{
	return capaciteProduits_;
}
