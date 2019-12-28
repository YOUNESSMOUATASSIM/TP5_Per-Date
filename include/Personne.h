#ifndef PERSONNE_H
#define PERSONNE_H
#include<string>
#include "Date.h"
using namespace std;

class Personne
{
    private:

    string nom,prenom;
    Date dateNaaissance;



    public:
        Personne();
        Personne(string n,string p,const Date& dt);
        ~Personne();

    string getNom();
    string getPrenom();
    void setNom(string);
    int getAge();


};

#endif // PERSONNE_H
