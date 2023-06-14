#include "Persoana.h"
#include "Functii.h"


    Persoana::Persoana()
    {
        Nume = Prenume = CNP = "";
    }

     Persoana::Persoana(string data)
    {

        ///string _date[] = data.Split(',');
        vector<string> dateAsArrayOfStrings = Functii::split(data, ",");
        Nume = dateAsArrayOfStrings[0];
        Prenume = dateAsArrayOfStrings[1];
        CNP = dateAsArrayOfStrings[2];

    }

    string Persoana::ConversieLaSir()
    {
        string dateForDisplay = Nume +" "+ Prenume +","+ CNP;
        return dateForDisplay;
    }


