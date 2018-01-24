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

void Rayon::ajouterProduit(Produit* produit)
{
}

void Rayon::afficher()
{
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
