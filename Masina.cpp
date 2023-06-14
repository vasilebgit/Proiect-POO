#include "Masina.h"

Masina::Masina()
{
    Model = 0;
    Serie = "Inexistent";
    Pret = 0;
}

Masina::Masina(string data)
{
    vector<string> _date = Functii::split(data,",");
    Model = stoi(_date[MODEL]);
    Serie = _date[SERIE];
    Pret = stoi(_date[PRET]);
}

string Masina::ConversieLaSir()
{
    string datePentruAfisare = "\n"+ModelMasina[Model]+"\t\t\t" + Serie + "\t\t\t"+to_string(Pret);
    return datePentruAfisare;
}

string Masina::ConversieLaSir_PentruScriereInFisier()
{
    string dateAfisareFisier = to_string(Model)+","+Serie+","+to_string(Pret);
    return dateAfisareFisier;
}



