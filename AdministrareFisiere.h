#ifndef ADMINISTRAREFISIERE_H
#define ADMINISTRAREFISIERE_H
#include <iostream>
#include <fstream>
#include <string>
#include "Client.h"
#include "Angajat.h"
#include "Masina.h"
#include "Inchirieri.h"

using namespace std;

class AdministrareFisiere
{
    const string NUME_FISIER_CLIENTI = "Clienti.txt";
    const string NUME_FISIER_ANGAJATI = "Angajati.txt";
    const string NUME_FISIER_MASINI = "Masini.txt";
    const string NUME_FISIER_INCHIRIERI = "Inchirieri.txt";

    public:
        AdministrareFisiere();
        ///Client
        void AddClient(Client client);
        void UpdateFisierClienti(vector<Client> clienti);
        vector<Client> GetClienti();
        Client GetClient(string nume,string prenume);
        ///Angajat
        void AddAngajat(Angajat angajat);
        void UpdateFisierAngajati(vector<Angajat> angajati);
        vector<Angajat> GetAngajati();
        Angajat GetAngajat(string nume,string prenume);
        ///Masina
        void AddMasina(Masina masina);
        void UpdateFisierMasini(vector<Masina> masini);
        vector<Masina> GetMasini();
        Masina GetMasina(string serie);
        ///Inchiriere
        void AddInchiriere(Inchirieri inchiriere);
        void UpdateFisierInchirieri(vector<Inchirieri> inchirieri);
        vector<Inchirieri> GetInchirieri();
        Inchirieri GetInchiriere(string ID);

};

#endif // ADMINISTRAREFISIERE_H
