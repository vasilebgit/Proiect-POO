#ifndef ANGAJAT_H
#define ANGAJAT_H
#include <iostream>
#include <string>
#include "Persoana.h"
#include "Functii.h"

using namespace std;

class Angajat:public Persoana
{
    public:
        string Functie;
        Angajat();
        Angajat(string);
        string ConversieLaSir();
        string ConversieLaSir_PentruScriereInFisier();
    private:
        const int FUNCTIE = 3;
};

#endif // ANGAJAT_H
