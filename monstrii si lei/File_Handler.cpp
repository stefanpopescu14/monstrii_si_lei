#include "File_Handler.h"

int FileHandler::getNumarActori(){

    string line, temp;
    int Actori = 0;

    fstream fin;
    fin.open("wednesdayCast.csv", ios::in);


    while(fin >> temp){
        getline(fin, line);
        stringstream ss(line);
            // numara aparitia cuv actor/actress
        string actor = "actor/actress";
        size_t found = line.find(actor);

        if(found != string::npos)
            Actori++;
    }

    fin.close();

    return Actori;
}


int FileHandler::getNumarTotal(){

    string line, temp;
    int nrTotal = 0;

    fstream fin;
    fin.open("wednesdayCast.csv", ios::in);



    while(fin >> temp){
        getline(fin, line);
        stringstream ss(line);

        nrTotal++;
    }

    fin.close();

    return nrTotal;
}
