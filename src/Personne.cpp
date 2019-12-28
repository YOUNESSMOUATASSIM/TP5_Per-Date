#include "Personne.h"
#include <string>
#include <iostream>
using namespace std;

Personne::Personne()
{
    this->nom="defaultNom";
    this->prenom="defaultPrenom";
}

Personne::~Personne()
{
    //dtor
}
Personne::Personne(string n ,string p,const Date& dt)
{
this->prenom=p;
this->nom=n;
this->dateNaaissance=dt;


}
void Personne::setNom(string n)
{

  this->nom=n;

}
string Personne::getNom()
{

return this->nom;


}
string Personne::getPrenom()
{

return this->prenom;


}
int Personne::getAge()
{
Date dt;

return dt.getAnnee()-dateNaaissance.getAnnee();
}
