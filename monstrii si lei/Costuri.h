#include <vector>
#include "Persoana.h"
#include "Interfata.h"
class Costuri:virtual public Interfata //Costuri are acces la clasa persoana;
{
protected:
    int n;
    Persoana *vec;

    int Cost_Machiaj[5]= {230,555,345,157,55};
    int Cost_Meniu[5]= {40,33,46};
    int Cost_Lichide[5]= {3,30,4};
    float Multiplier_Lichide[5]= {1,0.5,0.8};
    int reducere=2;
    int Zile[4]= {30,45,60,100};
    float dolar=4.64;
    int Castel=10000;
    float Cost_Zi[4]= {0,0,0,0};


    // int Optiuni_Meniu[3]={0,0,0};

    float Transport;
    float Calcul_Machiaj_Zi[4]= {0,0,0,0};
    float Calcul_Cazare_Zi[4]= {0,0,0,0};
    float Calcul_Mancare_si_apa_Zi[4]= {0,0,0,0};
    float Calcul_Inchiriere_spatiu_Zi[4]= {0,0,0,0};


public:
    Costuri();
    Costuri(int, Persoana *);
    virtual ~Costuri();
    Costuri& operator=(const Costuri&);

    void Calcul_Transport();
    void Calcul_Machiaj(int, int, int, int, int);
    void Calcul_Cazare();
    void Calcul_Mancare_si_apa(int,int,int);
    void Calcul_Inchiriere_spatiu();



    int Nr_Vampiri();
    int Nr_Varcolaci();
    int Nr_Sirene();
    int Nr_Clarvazatori();
    int Nr_Oameni();

    int Meniu_Omnivor();
    int Meniu_Vegetarian();
    int Meniu_Flexitarian();

    void Afisare();

};
