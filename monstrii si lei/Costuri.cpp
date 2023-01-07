#pragma once
#include "Costuri.h"
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
Costuri:: Costuri(int n1, Persoana *vec1)
{
    n=n1;
    vec=vec1;
}
Costuri::~Costuri()
{
    delete [] vec;
}
int Costuri::Nr_Vampiri()
{   //numar persoanele cu rol de vampir
    int k=0;
    for(int i=0; i<n; i++)
        if(vec[i].get_clasa()==0)
            k++;
    return k;
}
int Costuri::Nr_Varcolaci()
{
    int k=0;
    for(int i=0; i<n; i++)
        if(vec[i].get_clasa()==1)
            k++;
    return k;
}
int Costuri::Nr_Sirene()
{
    int k=0;
    for(int i=0; i<n; i++)
        if(vec[i].get_clasa()==2)
            k++;
    return k;
}
int Costuri::Nr_Clarvazatori()
{
    int k=0;
    for(int i=0; i<n; i++)
        if(vec[i].get_clasa()==3)
            k++;
    return k;
}
int Costuri::Nr_Oameni()
{
    int k=0;
    for(int i=0; i<n; i++)
        if(vec[i].get_clasa()==4)
            k++;
    return k;
}
int Costuri::Meniu_Omnivor()
{
    int k=0;
    for(int i=0; i<n; i++)
        if(vec[i].get_dieta()==0)
            k++;
    return k;
}
int Costuri::Meniu_Vegetarian()
{
    int k=0;
    for(int i=0; i<n; i++)
        if(vec[i].get_dieta()==1)
            k++;
    return k;
}
int Costuri::Meniu_Flexitarian()
{
    int k=0;
    for(int i=0; i<n; i++)
        if(vec[i].get_dieta()==2)
            k++;
    return k;
}

void Costuri:: Calcul_Machiaj(int n1,int n2,int n3, int n4, int n5)
{
    float Cost_Zi[4]= {0,0,0,0};
    int s=0;
    s+=n1*Cost_Machiaj[0];
    s+=n2*Cost_Machiaj[1];
    s+=n3*Cost_Machiaj[2];
    s+=n4*Cost_Machiaj[3];
    s+=n5*Cost_Machiaj[4];

    Calcul_Machiaj_Zi[0]+=s*Zile[0];
    Calcul_Machiaj_Zi[1]+=s*Zile[1];
    Calcul_Machiaj_Zi[2]+=s*Zile[2];
    Calcul_Machiaj_Zi[3]+=s*Zile[3];


    cout<<Zile[0]<<" zile"<<endl<< "Cost Machiaj in lei: "<<s*Zile[0]<<endl<<"Cost in dolari: "<<(float)s*1.0*Zile[0]/dolar<<endl;
    cout<<Zile[1]<<" zile"<<endl<< "Cost Machiaj in lei: "<<s*Zile[1]<<endl<<"Cost in dolari: "<<(float)s*1.0*Zile[1]/dolar<<endl;
    cout<<Zile[2]<<" zile"<<endl<< "Cost Machiaj in lei: "<<s*Zile[2]<<endl<<"Cost in dolari: "<<(float)s*1.0*Zile[2]/dolar<<endl;
    cout<<Zile[3]<<" zile"<<endl<< "Cost Machiaj in lei: "<<s*Zile[3]<<endl<<"Cost in dolari: "<<(float)s*1.0*Zile[3]/dolar<<endl;
}


void Costuri:: Calcul_Transport()
{
    float Cost_Zi[4]= {0,0,0,0};
    int     s=5680;
    int x;
    if(n%50!=0)
    {
        s*=(n/50+1);
        x=n/50+1;
    }

    else
    {
        s*=n/50;
        x=n/50;
    }

    s=s*2;

    Transport=s;
    cout<<"Nr autocare necesare: "<<x<<endl;
}

void Costuri:: Calcul_Cazare()
{
    float Cost_Zi[4]= {0,0,0,0};
    int s1=0; //ap 2 cam
    int s2=0; //ap 3 cam
    s2=(132/3)*420;
    s1=((n-132)/2+n%2)*350;
    Calcul_Cazare_Zi[0]+=((s1+s2)*Zile[0]);
    Calcul_Cazare_Zi[1]+=((s1+s2)*Zile[1]);
    Calcul_Cazare_Zi[2]+=((s1+s2)*Zile[2]);
    Calcul_Cazare_Zi[3]+=((s1+s2)*Zile[3]);
}

void Costuri:: Calcul_Mancare_si_apa(int m1,int m2, int m3)
{
    float Cost_Zi[4]= {0,0,0,0};
    int s=0,s1;
    s+=m1*Cost_Meniu[0];
    s+=m2*Cost_Meniu[1];
    s+=m3*Cost_Meniu[2];
    s1=(float)n*1.00*(Cost_Lichide[0]*Multiplier_Lichide[0]+Cost_Lichide[1]*Multiplier_Lichide[1]+Cost_Lichide[2]*Multiplier_Lichide[2]);//cost lichide pe zi
    Calcul_Mancare_si_apa_Zi[0]+=(s*Zile[0]+s1*Zile[0]);
    Calcul_Mancare_si_apa_Zi[1]+=(s*Zile[1]+s1*Zile[1]);
    Calcul_Mancare_si_apa_Zi[2]+=(s*Zile[2]+s1*Zile[2]);
    Calcul_Mancare_si_apa_Zi[3]+=(s*Zile[3]+s1*Zile[3]);

}

void Costuri::Calcul_Inchiriere_spatiu()
{
    Calcul_Inchiriere_spatiu_Zi[0]+=(Castel*Zile[0]-((Castel*Zile[0]*1.0/10)*2/100));
    Calcul_Inchiriere_spatiu_Zi[1]+=(Castel*Zile[1]-((Castel*Zile[1]*1.0/10)*2/100));
    Calcul_Inchiriere_spatiu_Zi[2]+=(Castel*Zile[2]-((Castel*Zile[2]*1.0/10)*2/100));
    Calcul_Inchiriere_spatiu_Zi[3]+=(Castel*Zile[3]-((Castel*Zile[3]*1.0/10)*2/100));
    // cout<<Calcul_Inchiriere_spatiu_Zi[3];
}
void Costuri::Afisare()
{

    // file pointer
    std:: fstream fout;

    // opens an existing csv file or creates a new file.
    fout.open("Costuri.csv", std::ios::out | std::ios::app);
    fout<<"Costurile sunt exprimate in dolari/Costs are set in dollars"<<"\n"<<"Cost Transport\Transport cost"<<", "<<Transport/dolar<<"\n";
    fout<<"Costuri pe zile/Costs by days"<<"\n";
    fout<<"30zile/days"<<", "<<"Cazare/Hotel"<<", "<<Calcul_Cazare_Zi[0]/dolar<<", "<<"Machiaj/Make-up"<<", "<<Calcul_Machiaj_Zi[0]/dolar<<", "<<"Mancare/Food"<<", "<<Calcul_Mancare_si_apa_Zi[0]/dolar<<", "<<"Inchiriere spatiu/Space rent"<<", "<<Calcul_Inchiriere_spatiu_Zi[0]/dolar<<"\n";
    fout<<"45zile/days"<<", "<<"Cazare/Hotel"<<", "<<Calcul_Cazare_Zi[1]/dolar<<", "<<"Machiaj/Make-up"<<", "<<Calcul_Machiaj_Zi[1]/dolar<<", "<<"Mancare/Food"<<", "<<Calcul_Mancare_si_apa_Zi[1]/dolar<<", "<<"Inchiriere spatiu/Space rent"<<", "<<Calcul_Inchiriere_spatiu_Zi[1]/dolar<<"\n";
    fout<<"60zile/days"<<", "<<"Cazare/Hotel"<<", "<<Calcul_Cazare_Zi[2]/dolar<<", "<<"Machiaj/Make-up"<<", "<<Calcul_Machiaj_Zi[2]/dolar<<", "<<"Mancare/Food"<<", "<<Calcul_Mancare_si_apa_Zi[2]/dolar<<", "<<"Inchiriere spatiu/Space rent"<<", "<<Calcul_Inchiriere_spatiu_Zi[2]/dolar<<"\n";
    fout<<"100zile/days"<<", "<<"Cazare/Hotel"<<", "<<Calcul_Cazare_Zi[3]/dolar<<", "<<"Machiaj/Make-up"<<", "<<Calcul_Machiaj_Zi[3]/dolar<<", "<<"Mancare/Food"<<", "<<Calcul_Mancare_si_apa_Zi[3]/dolar<<", "<<"Inchiriere spatiu/Space rent"<<", "<<Calcul_Inchiriere_spatiu_Zi[3]/dolar<<"\n";


}

