#ifndef CLIENT_H
#define CLIENT_H
#include "Persoana.h"
#include "Functii.h"
#include <string>


class Client:public Persoana
{

         vector<int> ID_Inchirieri;
    public:
        Client();
        Client(string data);
        string ConversieLaSir();
        string ConversieLaSir_PentruScriereInFisier();
};

#endif // CLIENT_H
