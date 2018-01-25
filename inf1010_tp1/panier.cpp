#include "stdafx.h"
#include "panier.h"

Panier::Panier(int capacite): nombreContenu_(0), capaciteContenu_(capacite), totalAPayer_(0)
{
	contenuPanier_ = new Produit*[capaciteContenu_];
}

Produit** Panier::obtenirContenuPanier() const
{
	return contenuPanier_;
}

int Panier::obtenirNombreContenu() const
{
	return nombreContenu_;
}

double Panier::obtenirTotalApayer() const
{
	return totalAPayer_;
}

void Panier::doublerCapacite()
{
	capaciteContenu_ *= 2;

	Produit** produits = new Produit*[capaciteContenu_];

	for (unsigned i = 0; i < nombreContenu_; ++i)
	{
		produits[i] = contenuPanier_[i];
	}
	delete[] contenuPanier_;
	contenuPanier_ = produits;
}

void Panier::ajouter(Produit* prod)
{
	if (capaciteContenu_ == nombreContenu_)
		doublerCapacite();
	contenuPanier_[nombreContenu_] = prod;
	nombreContenu_++;
}

void Panier::livrer()
{

}

void Panier::afficher()
{
}
