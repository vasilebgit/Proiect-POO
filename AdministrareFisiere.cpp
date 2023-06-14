#include "AdministrareFisiere.h"

AdministrareFisiere::AdministrareFisiere()
{
}

void AdministrareFisiere::AddClient(Client client)
{
    fstream fisierClienti;
    fisierClienti.open (NUME_FISIER_CLIENTI,fstream::in|fstream::out|fstream::app);
    fisierClienti << client.ConversieLaSir_PentruScriereInFisier()<<endl;
    fisierClienti.close();
}

void AdministrareFisiere::UpdateFisierClienti(vector<Client> clienti)
{
    ofstream fisierClienti(NUME_FISIER_CLIENTI, ios::out | ios::trunc);
    for(Client client:clienti)
    {
        fisierClienti<<client.ConversieLaSir_PentruScriereInFisier()<<endl;
    }
    fisierClienti.close();
}

Client AdministrareFisiere::GetClient(string _nume,string _prenume)
{
    ifstream fisierClienti(NUME_FISIER_CLIENTI);
    string linieDinFisier;
    while(getline(fisierClienti,linieDinFisier))
    {
        Client clientReturnat(linieDinFisier);
        if(clientReturnat.GetNume().compare(_nume) == 0 && clientReturnat.GetPrenume().compare(_prenume) == 0)
        {
            return (Client(linieDinFisier));
            break;
        }

    }
    return Client();
}

vector<Client> AdministrareFisiere::GetClienti()
{
    ifstream fisierClienti(NUME_FISIER_CLIENTI);
    string linieDinFisier;
    vector<Client> clienti;
    while(getline(fisierClienti,linieDinFisier))
    {
       clienti.push_back(Client(linieDinFisier));
    }
    return clienti;
}

//////////////////////////////////////////////////////////////////////////////////////


void AdministrareFisiere::AddAngajat(Angajat angajat)
{
    fstream fisierAngajati;
    fisierAngajati.open (NUME_FISIER_ANGAJATI,fstream::in|fstream::out|fstream::app);
    fisierAngajati << angajat.ConversieLaSir_PentruScriereInFisier()<<endl;
    fisierAngajati.close();
}

void AdministrareFisiere::UpdateFisierAngajati(vector<Angajat> angajati)
{
    ofstream fisierAngajati(NUME_FISIER_ANGAJATI, ios::out | ios::trunc);
    for(Angajat angajat:angajati)
    {
        fisierAngajati<<angajat.ConversieLaSir_PentruScriereInFisier()<<endl;
    }
    fisierAngajati.close();
}
Angajat AdministrareFisiere::GetAngajat(string _nume,string _prenume)
{
    ifstream fisierAngajati(NUME_FISIER_ANGAJATI);
    string linieDinFisier;
    while(getline(fisierAngajati,linieDinFisier))
    {
        Angajat angajatReturnat(linieDinFisier);
        if(angajatReturnat.GetNume().compare(_nume) == 0 && angajatReturnat.GetPrenume().compare(_prenume) == 0)
        {
            return (Angajat(linieDinFisier));
            break;
        }

    }
    return Angajat();
}
vector<Angajat> AdministrareFisiere::GetAngajati()
{
    ifstream fisierAngajati(NUME_FISIER_ANGAJATI);
    string linieDinFisier;
    vector<Angajat> angajati;
    while(getline(fisierAngajati,linieDinFisier))
    {
       angajati.push_back(Angajat(linieDinFisier));
    }
    return angajati;
}


///////////////////////////////////////////////////////////////////////////////////

void AdministrareFisiere::AddMasina(Masina masina)
{
    fstream fisierMasini;
    fisierMasini.open (NUME_FISIER_MASINI,fstream::in|fstream::out|fstream::app);
    fisierMasini << masina.ConversieLaSir_PentruScriereInFisier()<<endl;
    fisierMasini.close();
}

void AdministrareFisiere::UpdateFisierMasini(vector<Masina> masini)
{
    ofstream fisierMasini(NUME_FISIER_MASINI, ios::out | ios::trunc);
    for(Masina masina:masini)
    {
        fisierMasini << masina.ConversieLaSir_PentruScriereInFisier()<<endl;
    }
    fisierMasini.close();
}

Masina AdministrareFisiere::GetMasina(string _serie)
{
    ifstream fisierMasini(NUME_FISIER_MASINI);
    string linieDinFisier;
    while(getline(fisierMasini,linieDinFisier))
    {
        Masina masinaReturnata(linieDinFisier);
        if(masinaReturnata.GetSerie().compare(_serie) == 0)
        {
            return (Masina(linieDinFisier));
            break;
        }
    }
    return Masina();
}
vector<Masina> AdministrareFisiere::GetMasini()
{
    ifstream fisierMasini(NUME_FISIER_MASINI);
    string linieDinFisier;
    vector<Masina> masini;
    while(getline(fisierMasini,linieDinFisier))
    {
       masini.push_back(Masina(linieDinFisier));
    }
    return masini;
}

/////////////////////////////////////////////////////////////////////////////////

void AdministrareFisiere::AddInchiriere(Inchirieri inchiriere)
{
    fstream fisierInchirieri;
    fisierInchirieri.open (NUME_FISIER_INCHIRIERI,fstream::in|fstream::out|fstream::app);
    fisierInchirieri << inchiriere.ConversieLaSir_PentruScriereInFisier()<<endl;
    fisierInchirieri.close();
}

void AdministrareFisiere::UpdateFisierInchirieri(vector<Inchirieri> inchirieri)
{
    ofstream fisierInchirieri(NUME_FISIER_INCHIRIERI, ios::out | ios::trunc);
    for(Inchirieri inchiriere:inchirieri)
    {
        fisierInchirieri << inchiriere.ConversieLaSir_PentruScriereInFisier()<<endl;
    }
    fisierInchirieri.close();
}

Inchirieri AdministrareFisiere::GetInchiriere(string _id)
{
    ifstream fisierInchirieri(NUME_FISIER_INCHIRIERI);
    string linieDinFisier;
    while(getline(fisierInchirieri,linieDinFisier))
    {
        Inchirieri inchiriereReturnata(linieDinFisier);
        if(inchiriereReturnata.GetID().compare(_id) == 0)
        {
            return (Inchirieri(linieDinFisier));
            break;
        }
    }
    return Inchirieri();
}
vector<Inchirieri> AdministrareFisiere::GetInchirieri()
{
    ifstream fisierInchirieri(NUME_FISIER_INCHIRIERI);
    string linieDinFisier;
    vector<Inchirieri> inchirieri;
    while(getline(fisierInchirieri,linieDinFisier))
    {
       inchirieri.push_back(Inchirieri(linieDinFisier));
    }
    return inchirieri;
}
