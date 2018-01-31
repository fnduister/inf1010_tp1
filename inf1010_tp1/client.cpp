#include "stdafx.h"
#include "client.h"


Client::Client(const string& nom, const string& prenom, int identifiant, const string& codePostal, long dateNaissance)
	: nom_(nom),
	prenom_(prenom),
	identifiant_(identifiant),
	codePostal_(codePostal),
	dateNaissance_(dateNaissance),
	monPanier_(nullptr)
{
}

Client::~Client()
{
	delete [] monPanier_;
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
	if (monPanier_ == nullptr)
		monPanier_ = new Panier(4);
	monPanier_->ajouter(prod);
}

void Client::afficherPanier() const
{
	if (monPanier_->obtenirContenuPanier() == nullptr)
		std::cout << "Vous n'avez encore rien dans votre panier" << std::endl;
	else 
		monPanier_->afficher();
}

void Client::livrerPanier() const
{
	std::cout << "Nous avons le plaisir de vous annonce que votre livraison est complete, Merci pour vos achats." << std::endl;
	monPanier_->livrer();
}

void Client::afficher() const
{
	std::cout <<nom_ << " " << prenom_ << " nee le: "<< dateNaissance_ << std::endl;
	std::cout << "Identifiant: " << identifiant_ << "\nCode-postal: " << codePostal_ << std::endl << std::endl;
	if (monPanier_ == nullptr)
		std::cout << "Vous n'avez encore rien dans votre panier" << std::endl;
	else
		monPanier_->afficher();
}
