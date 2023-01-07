#pragma once
#include "Meniu.h"
#include<iostream>
#include"Interfata.h"
#include <string>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <time.h>
Meniu::Meniu(int x)
{
    tip=x;
    int lb,ub;
    char* Supa1[]= {"Supa de perisoare","Ciorba de vacuta","Ciorba de burta","Supa crema de ciuperci","Supa de rosii","Supa de dovlecel","Ciorba de Peste","Supa crema de morcov","Supa crema de brocoli"};
    char* Fel_principal1[]= {"Piept de pui la gratar","Ceafa de porc la gratar","Paste Carbonara","Ciupercute cu cascsval","Dovlecel pane","Salata","File de somon","Cod","Salata de ton"};
    char* Desert1[]= {"Inghetata de vanilie","Cozonac","Brownie cu zmeura"};

    char* Supa1en[]= {"Meatball soup","Beef soup","Beef tummy soup","Mushroom cream soup","Tomato soup","Zucchinni soup","Fish soup","Carrot cream soup","Brocolli cream soup"};
    char* Fel_principal1en[]= {"Grilled chicken","grilled pig","Carbonara pasta","Cheese Mushrooms","Grilled Zucchinni","Salad","Grilled salmon","Cod","Tuna salad"};
    char* Desert1en[]= {"Vanilla ice-cream","Cozonac","Brownie"};

    if(x==0)
    {
        lb=0;
        ub=8;
    }
    else if(x==1)
    {
        lb=3;
        ub=5;
    }
    else
    {
        lb=3;
        ub=8;
    }
    srand(time(0));
    Supa=Supa1[(rand() % (ub - lb + 1)) + lb];
    srand(time(0));
    Fel_principal=Fel_principal1[(rand() % (ub - lb + 1)) + lb];
    srand(time(0));
    Desert=Desert1[(rand() % (2 - 0 + 1)) + 0];
    srand(time(0));
    Supaen=Supa1en[(rand() % (ub - lb + 1)) + lb];
    srand(time(0));
    Fel_principalen=Fel_principal1en[(rand() % (ub - lb + 1)) + lb];
    srand(time(0));
    Deserten=Desert1en[(rand() % (2 - 0 + 1)) + 0];


}
void Meniu::Afisare()
{
    // file pointer
    std:: fstream fout;

    // opens an existing csv file or creates a new file.
    fout.open("Meniu_Generat.csv", std::ios::out | std::ios::app);
    if(tip==0)
        fout<<"Meniu_omnivor";
    else if (tip==1)
        fout<<"Meniu_vegetarian";
    else
        fout<<"Meniu flexitarian";
    fout<<", "<<Supa<<", "<<Fel_principal<<", "<<Desert<<"\n";

    // file pointer
    std:: fstream fouten;

    // opens an existing csv file or creates a new file.
    fouten.open("Meniu_Generaten.csv", std::ios::out | std::ios::app);
    if(tip==0)
        fouten<<"Omnivore menu";
    else if (tip==1)
        fouten<<"Vegetarian menu";
    else
        fouten<<"Flexitarean menu";
    fouten<<", "<<Supaen<<", "<<Fel_principalen<<", "<<Deserten<<"\n";


}
Meniu::~Meniu()
{

}
