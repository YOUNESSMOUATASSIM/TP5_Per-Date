#include "Date.h"
#include <ctime>

Date::Date()
{
     time_t now=time(0);
     tm *ltm = localtime(&now);

            this->jj=1+ltm->tm_mday;
            this->mm=1+ltm->tm_mon;
            this->aaaa=1900 + ltm->tm_year;

}

Date::~Date()
{
    //dtor
}
int Date::getJour()
{
    return this->jj;
}
int Date::getMois()
{
    return this->mm;
}
int Date::getAnnee()
{
    return this->aaaa;
}

void Date::setJour(int j)
{

    this->jj=j;
}

void Date::setMois(int m)
{

    this->mm=m;
}
void Date::setAnnee(int a)
{
    this->aaaa=a;
}
