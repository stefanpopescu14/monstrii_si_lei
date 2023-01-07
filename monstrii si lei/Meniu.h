#pragma once
#include<iostream>
#include"Interfata.h"
#include <string>
class Meniu:virtual public Interfata
{
protected:
    std::    string Supa="NO";
    std::string Fel_principal="NO";
    std::   string Desert="NO";
    std::    string Supaen="NO";
    std::string Fel_principalen="NO";
    std::   string Deserten="NO";
    int tip;//atribut pt tipul meniului
public:
    Meniu(int );
    //Meniu(std::string, std::string, std::string);
    ~Meniu();
    void Afisare();
};
