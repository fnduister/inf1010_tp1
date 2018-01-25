#include "stdafx.h"
#include "Produit.h"
#include "iomanip"
#include "string"

Produit::Produit()
{
	nom_ = "outil";
	reference_ = prix_ = 0;
}

Produit::Produit(string nom, int reference, double prix):
nom_(nom),reference_(reference),prix_(prix){}

string Produit::obtenirNom() const
{
	return nom_;
}

int Produit::obtenirReference() const
{
	return reference_;
}

double Produit::obtenirPrix() const
{
	return prix_;
}

void Produit::modifierNom(string nom)
{
	nom_ = nom;
}

void Produit::modifierReference(int reference)
{
	reference_ = reference;
}

void Produit::modifierPrix(double prix)
{
	prix_ = prix;
}

void Produit::afficher() const
{
	std::cout << "Nom: " << obtenirNom() << std::endl;
	std::cout << "Numero de reference: " << obtenirReference() << std::endl;
	std::cout << "Prix: " << obtenirPrix() << "$"<< std::endl;
}
