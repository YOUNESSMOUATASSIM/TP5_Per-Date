#include <iostream>
#include "Personne.h"

using namespace std;

int main()
{
Date d;

d.setJour(4);
d.setMois(9);
d.setAnnee(1996);




    Personne phil("Philippe","Durnant",d);
    string nom =phil.getNom()+" "+phil.getPrenom();

    cout<<"\n Saisissez un nouveau nom pour " << nom <<" : \n";

    string nouveauNom ="";
    cin>>nouveauNom;

    phil.setNom(nouveauNom);
    nom =phil.getNom()+" "+phil.getPrenom();

cout<<"\n Saisissez un nouveau nom pour " << nom <<" : \n";

cout<<"\n l age : " <<phil.getAge()<<"\n";


    return 0;
}
