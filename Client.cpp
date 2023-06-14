#include "Client.h"
Client::Client()
{
    Nume = "Inexistent";
    Prenume = "Inexistent";
    CNP = "-------------";
    ID_Inchirieri.push_back(0);
}

Client::Client(string data):Persoana(data)
{
    vector<string> _date = Functii::split(data,",");
    vector<string> _Date = Functii::split(_date[3],"-");

    ID_Inchirieri.resize(_Date.size());
    for (int i = 0; i < ID_Inchirieri.size(); i++)
    {
        ID_Inchirieri[i] = stoi(_Date[i]);
    }
}

string Client::ConversieLaSir()
{
    string datePentruAfisare = "\n"+Nume+" "+Prenume+"\t\t\t"+CNP+"\t\t\t";
    for(int inchiriere:ID_Inchirieri)
    {
        datePentruAfisare += to_string(inchiriere)+"-";
    }
    datePentruAfisare.pop_back();
    return datePentruAfisare;
}

string Client::ConversieLaSir_PentruScriereInFisier()
{
    string dateAfisareFisier = Nume+","+Prenume+","+CNP+",";
    for(int inchiriere:ID_Inchirieri)
    {
        dateAfisareFisier += to_string(inchiriere)+"-";
    }
    dateAfisareFisier.pop_back();
    return dateAfisareFisier;
}


