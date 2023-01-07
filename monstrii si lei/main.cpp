#pragma once
#include <iostream>
#include"Persoana.h"
#include"Costuri.h"
#include<bits/stdc++.h>
#include "Meniu.h"
#include "File_Handler.h"


#include <fstream>
#include <string>
#include <sstream>
#include <cstring>
using namespace std;




void Asign(vector <Persoana> x, int n)//functie pentru introducerea persoanelor din csv intr-un vector de tipul Persoana, vectorul si nr de elemente ca atribute
{
    string line;
    string temp;

    string nume1;
    string functie1;

    fstream fin;
    fin.open("wednesdayCast.csv", ios::in);//deschidem fisierul

    int i=0;
    while(fin >> temp&&i<n)
    {
        getline(fin, line);

        std::size_t found=line.find(',');
        if (found!=std::string::npos)
        {

  //nume1.copy(line,found);
    //    functie1.copy(line, line.length-1, (int)found+2);
        stringstream ss(line);
        x[i].set_functie(functie1);
        x[i].set_nume(nume1);
        }


        i++;
    }

    fin.close();

}



int main()
{
    string string1="MIH", string2="Ana", string3="fc1",string4="fc2";
    Persoana Persoana1(string1,string3,0,0);
    Persoana Persoana2(string2,string4,1,1);
    Persoana vec[]= {Persoana1,Persoana2};

    /*
n=getNumarTotal;

    vector <Persoana> Vector_Persoana(132+n);//Vectorul cu figuranti creati random+ cele n persoane din fisier;
        Vector_Persoana.Asign(Vector_Persoana, n);
    for(int i=132; i<264; i++)
        Vector_Persoana[i].Afisare();
        */
       vector <Persoana> Vector_Persoana(132);
           for(int i=0; i<132; i++)
        Vector_Persoana[i].Afisare();

    Costuri Cost(2,vec);
    int n1,n2,n3,n4,n5;
    n1=Cost.Nr_Vampiri();
    n2=Cost.Nr_Varcolaci();
    n3=Cost.Nr_Sirene();
    n4=Cost.Nr_Clarvazatori();
    n5=Cost.Nr_Oameni();
    int m1,m2,m3;
    m1=Cost.Meniu_Omnivor();
    m2=Cost.Meniu_Vegetarian();
    m3=Cost.Meniu_Flexitarian();

    //portiune cu functii care calcuelaza
    Cost.Calcul_Machiaj(n1,n2,n3,n4,n5);
    Cost.Calcul_Transport();
    Cost.Calcul_Cazare();
    Cost.Calcul_Mancare_si_apa(m1,m2,m3);
    Cost.Calcul_Inchiriere_spatiu();


    Meniu m(0);
    Meniu m11(1);
    Meniu m22(2);
    m.Afisare();
    m11.Afisare();
    m22.Afisare();
    Cost.Afisare();

    return 0;
}
