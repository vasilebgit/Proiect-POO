#ifndef INCHIRIERI_H
#define INCHIRIERI_H
#include <iostream>
#include <string>
#include "Functii.h"

using namespace std;

class Inchirieri
{
    const int ID = 0;
    const int CNP = 1;
    const int SERIE_MASINA = 2;
    const int DATA_INC = 3;
    const int DATA_TER = 4;

public:
    int ID_inchiriere;
    string CNP_client;
    string serieMasina;
    string dataIncepere;
    string dataTerminare;

    string GetID()
    {
        return to_string(ID_inchiriere);
    }
    Inchirieri();
    Inchirieri(string);
    string ConversieLaSir();
    string ConversieLaSir_PentruScriereInFisier();

};

#endif // INCHIRIERI_H
