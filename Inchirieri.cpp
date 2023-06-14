#include "Inchirieri.h"

Inchirieri::Inchirieri()
{
    ID_inchiriere = 0;
    CNP_client = "-------------";
    serieMasina = "-----------------";
    dataIncepere = "--/--/----";
    dataTerminare = "--/--/----";
}

Inchirieri::Inchirieri(string _date)
{
    vector<string> date = Functii::split(_date,",");
    ///int.TryParse(date[ID], out int id);
    ID_inchiriere = stoi(date[ID]);
    CNP_client = date[CNP];
    serieMasina = date[SERIE_MASINA];
    dataIncepere = date[DATA_INC];
    dataTerminare = date[DATA_TER];
}

string Inchirieri::ConversieLaSir()
{
    string datePentruAfisare = "\n"+to_string(ID_inchiriere) + "\t\t" + CNP_client + "\t\t" + serieMasina + "\t\t" + dataIncepere+"-"+dataTerminare;
    return datePentruAfisare;
}

string Inchirieri::ConversieLaSir_PentruScriereInFisier()
{
    string datePentruAfisare = to_string(ID_inchiriere) + "," + CNP_client + "," + serieMasina + "," + dataIncepere+","+dataTerminare;
    return datePentruAfisare;
}

