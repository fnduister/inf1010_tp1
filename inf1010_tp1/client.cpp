#include "stdafx.h"
#include "client.h"


Client::Client(const string& nom, const string& prenom, int identifiant, const string& codePostal, long dateNaissance)
	: nom_(nom),
	prenom_(prenom),
	identifiant_(identifiant),
	codePostal_(codePostal),
	dateNaissance_(dateNaissance)
{
	monPanier_ = nullptr;
}

string Client::obtenirNom() const
{
	return nom_;
}

string Client::obtenirPrenom() const
{
	return prenom_;
}

int Client::obtenirIdentifiant() const
{
	return identifiant_;
}

string Client::obtenirCodePostal() const
{
	return codePostal_;
}

long Client::obtenirDateNaissance() const
{
	return dateNaissance_;
}

void Client::modifierNom(string nom)
{
	nom_ = nom;
}

void Client::modifierPrenom(string prenom)
{
	prenom_ = prenom;
}

void Client::modifierIdentifiant(int identifiant)
{
	identifiant_ = identifiant;
}

void Client::modifierCodePostal(string codePostal)
{
	codePostal_ = codePostal;
}

void Client::modifierDateNaissance(long date)
{
	dateNaissance_ = date;
}


void Client::acheter(Produit* prod)
{
	
}

void Client::afficherPanier()
{
}

void Client::livrerPanier()
{
}