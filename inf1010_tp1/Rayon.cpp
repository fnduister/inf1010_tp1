#include "stdafx.h"
#include "Rayon.h"

Rayon::Rayon():
	Rayon("inconnu")
{
}

Rayon::Rayon(const string& cat):
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

void Rayon::modifierCategorie(const string& cat)
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
		capaciteProduits_ += capaciteRayonParDefaut_;

		Produit** produits = new Produit*[capaciteProduits_];

		for (int i = 0; i < nombreProduits_; ++i)
		{
			produits[i] = tousProduits_[i];
		}
		delete [] tousProduits_;
		tousProduits_ = produits;
	}
}

void Rayon::ajouterProduit(Produit* produit)
{
	if (capaciteProduits_ == nombreProduits_)
		augmenterCapacite();
	tousProduits_[nombreProduits_++] = produit;
}

void Rayon::afficher() const
{
	std::cout << "liste des produits:" << std::endl;

	for (int i = 0; i < nombreProduits_; ++i) {
		tousProduits_[i]->afficher();
		std::cout << std::endl;
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

Rayon::~Rayon()
{
	delete[] tousProduits_;
}
