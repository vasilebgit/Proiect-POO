#ifndef MASINA_H
#define MASINA_H
#include <iostream>
#include <string>
#include "Functii.h"
#include <map>

using namespace std;

class Masina
{
private:
    const int MODEL = 0;
    const int SERIE = 1;
    const int PRET = 2;
public:
    map<int, string >ModelMasina
    {
        {1,"Opel"},
        {2,"Renault"},
        {3,"BMW"},
        {4,"Audi"},
        {5,"Dacia"},
        {6,"Ford"},
        {7,"Volkswagen"},
        {8,"Mercedes"},
        {9,"Tesla"}
};
    int Model;
    string Serie;
    int Pret;

public:
    string GetSerie()
    {
        return Serie;
    }
    Masina();
    Masina(string);
    string ConversieLaSir();
    string ConversieLaSir_PentruScriereInFisier();
};

#endif // MASINA_H
