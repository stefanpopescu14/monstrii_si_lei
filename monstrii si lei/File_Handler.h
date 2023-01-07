#ifndef FILE_READER_H
#define FILE_READER_H

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

class FileHandler{
    public:
        void printDateFisier();
        virtual int getNumarActori();
        virtual int getNumarTotal();
};

#endif // FILE_READER_H
