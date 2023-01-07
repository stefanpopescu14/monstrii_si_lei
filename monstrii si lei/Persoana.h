#pragma once
#include <string>
#include "Interfata.h"
#include <cstdlib>
#include <fstream>
//#include "File_Handler.h"
class Persoana:virtual public Interfata//, public FileHandler
{
protected:
    std::string nume;
    std:: string functie;
    int clasa; //0= Vampir, 1= Varcolac, 2= Sirene, 3= Clarvazator, 4= Om
    int dieta; // 0=Omnivor, 1=Vegetarian, 2= Flexitarian
public:
    //constructori
    Persoana();
    Persoana(std::string, std::string, int, int);
    Persoana(std::string, std::string);

    ~Persoana();
    Persoana& operator=(const Persoana&);
    void Afisare();

    //seturi si geturi
    int get_clasa();
    int get_dieta();
    void set_nume(std::string);
    void set_functie(std::string);
};
