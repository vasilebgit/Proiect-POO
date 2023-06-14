#ifndef PERSOANA_H
#define PERSOANA_H
#include <string.h>
#include <iostream>

using namespace std;
class Persoana
{
    public:
    string Nume;
    string Prenume;
    string CNP;
    public:
    string GetNume()
    {
        return Nume;
    }
    string GetPrenume()
    {
        return Prenume;
    }
        Persoana();
        Persoana(string data);
        virtual string ConversieLaSir();
};
#endif // PERSOANA_H
