#pragma once
#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>
#include <fstream>
#include "Persoana.h"
#include <time.h>
using namespace std;


Persoana::Persoana()
{
    char* nume1[]= {"Popescu Ion","Ionescu Alex","Popa Teodora","Anghel Ana","Popa Maria","Rusu Mihai"};
    char* functie1[]= {"functie 1","functie 2","functie 3","functie 4","functie 5","functie 6"};
    int ub=5;
    int lb=0;
    srand(time(0));
    nume=nume1[(rand() % (ub - lb + 1)) + lb];
    srand(time(0));
    functie=functie1[(rand() % (ub - lb + 1)) + lb];
    //functie="FUNCTIE";
    ub=4;
    lb=0;
    srand(time(0));
    clasa=(rand() % (ub - lb + 1)) + lb;
    ub=2;
    srand(time(0));
    dieta=(rand() % (ub - lb + 1)) + lb;
}
Persoana::Persoana(string nume1,string functie1, int clasa1, int dieta1)
{
    nume=nume1;
    functie=functie1;
    clasa=clasa1;
    dieta=dieta1;

}
Persoana::Persoana(string nume1,string functie1)//constructor cu 2 parametrii pt adaugarea persoanelor din cast
{
    nume=nume1;
    functie=functie1;
    int ub=4;
    int lb=0;
    srand(time(0));
    clasa=(rand() % (ub - lb + 1)) + lb;
    ub=2;
    srand(time(0));
    dieta=(rand() % (ub - lb + 1)) + lb;

}

Persoana::~Persoana()
{

}

Persoana& Persoana::operator=(const Persoana& x)
{
    nume=x.nume;
    functie=x.functie;
    clasa=x.clasa;
    dieta=x.dieta;
    return *this;
}


void Persoana::Afisare()
{
// file pointer
    std:: fstream fout;

    // opens an existing csv file or creates a new file.
    fout.open("wednesdayCast.csv", std::ios::out | std::ios::app);

    fout<<nume<<", "<<functie<<"\n";
}


int Persoana::get_clasa()
{
    return clasa;
}
int Persoana::get_dieta()
{
    return dieta;
}


void Persoana::set_nume(std::string x)
{
    nume=x;
}

void Persoana::set_functie(std::string x)
{
    functie=x;
}
