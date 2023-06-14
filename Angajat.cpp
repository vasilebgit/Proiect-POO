#include "Angajat.h"

Angajat::Angajat()
{
    Nume = "Inexistent";
    Prenume = "Inexistent";
    CNP = "Inexistent";
    Functie = "Inexistent";
}

 Angajat::Angajat(string _date):Persoana(_date)
{
    vector<string> Date = Functii::split(_date,",");
    Functie = Date[FUNCTIE];
}

string Angajat::ConversieLaSir()
{
    string datePentruAfisare = "\n"+Nume + " " + Prenume + "\t\t" + CNP + "\t\t" + Functie;
    return datePentruAfisare;
}
string Angajat::ConversieLaSir_PentruScriereInFisier()
{
    string dateAfisareFisier = Nume+","+Prenume+","+CNP+","+Functie;
    return dateAfisareFisier;
}
