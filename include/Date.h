#ifndef DATE_H
#define DATE_H


class Date
{

    private:
         int jj,mm,aaaa;

    public:
        Date();
        ~Date();
     int getJour();
     int getMois();
     int getAnnee();

    void setJour(int);
     void setMois(int);
     void setAnnee(int);

};

#endif // DATE_H
