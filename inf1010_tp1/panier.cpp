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

double Panier::obtenirTotalApayer()
{
	if(nombreContenu_ != 0)
		for (int i = 0; i < nombreContenu_; ++i)
		{
			totalAPayer_ += contenuPanier_[i]->obtenirPrix();
		}
	return totalAPayer_;
}

void Panier::doublerCapacite()
{
	capaciteContenu_ *= 2;

	Produit** produits = new Produit*[capaciteContenu_];

	for (int i = 0; i < nombreContenu_; ++i)
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
	contenuPanier_[nombreContenu_++] = prod;
}

void Panier::livrer()
{
	delete[] contenuPanier_;
	contenuPanier_ = nullptr;
	nombreContenu_ = 0; totalAPayer_ = 0;
}

void Panier::afficher()
{
	std::cout << "\nLe prix total de votre panier est: " << obtenirTotalApayer() << " $\n" << std::endl;
	for (int i = 0; i < nombreContenu_; ++i)
	{
		std::cout << "------------------------" << std::endl;
		std::cout << "Produit numero " << i + 1<< std::endl;
		contenuPanier_[i]->afficher();
		std::cout << std::endl;
	}
}
