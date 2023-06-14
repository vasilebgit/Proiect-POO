#include "Meniu.h"

Meniu::Meniu()
{
    //ctor
}

void Meniu::OptiuniMeniu()
{

    cout<<"  _____            _     _      _           _               _ " << endl;
    cout<<" |_   _|          | |   (_)    (_)         (_)             | |       " << endl;
    cout<<"   | |  _ __   ___| |__  _ _ __ _  ___ _ __ _    __ _ _   _| |_ ___  " << endl;
    cout<<"   | | | '_ \\ / __| '_ \\| | '__| |/ _ \\ '__| |  / _` | | | | __/ _ \\ " << endl;
    cout<<"  _| |_| | | | (__| | | | | |  | |  __/ |  | | | (_| | |_| | || (_) |" << endl;
    cout<<" |_____|_| |_|\\___|_| |_|_|_|  |_|\\___|_|  |_|  \\__,_|\\__,_|\\__\\___/ " << endl;


    cout << "*****************************************************************************" << endl;
    cout << "****-----------------------------< MENIU >-------------------------------****" << endl ;
    cout << "****|                                                                   |****" << endl;
    cout << "****|  1/2/3/4. Afisare clienti/angajati/masini/inchirieri              |****" << endl ;
    cout << "****|  Q/W/E/R. Creare si adaugare client/angajat/masina/inchiriere     |****" << endl;
    cout << "****|  A/S/D/F. Cauta client/angajat/masina/inchiriere in fisier        |****" << endl;
    cout << "****|  Z/X/C/V. Update client/angajat/masina/inchiriere in fisier       |****" << endl;
    cout << "****|  I. Inchidere program                                             |****" << endl;
    cout << "****|                                                                   |****" << endl;
    cout << "****---------------------------------------------------------------------****" << endl;
    cout << "*****************************************************************************" << endl;
}

void Meniu::MeniuPrincipal()
{
    const int LUNGIME_CNP = 13;
    AdministrareFisiere fisier;
    vector<Client> clienti = fisier.GetClienti();
    vector<Angajat> angajati = fisier.GetAngajati();
    vector<Masina> masini = fisier.GetMasini();
    vector<Inchirieri> inchirieri = fisier.GetInchirieri();

    while(true)
    {
        system("cls");
        OptiuniMeniu();
        char optiune;
        cout << endl<<"Introduceti optiunea dorita: ";
        cin >> optiune;
        system("cls");
        switch(toupper(optiune))
        {
        case '1':

            cout << "Afisare lista clienti inregistrati:" << endl;
            cout <<"Nume si prenume\t\t\tCNP\t\t\tId inchirieri"<<endl;
            for(Client client:clienti)
            {
                cout << client.ConversieLaSir();
            }
            break;
        case '2':
            cout << "Afisare lista angajati inregistrati:" << endl;
            cout <<"Nume si prenume\t\t\tCNP\t\t\tFunctie"<<endl;
            for(Angajat angajat:angajati)
            {
                cout << angajat.ConversieLaSir();
            }
            break;
        case '3':
            cout << "Afisare lista masini:" << endl;
            cout <<"Model\t\t\tSerie\t\t\t\t\tPret"<<endl;
            for(Masina masina:masini)
            {
                cout << masina.ConversieLaSir();
            }
            break;
        case '4':
            cout << "Afisare lista cu inchirieri efecutate:" << endl;
            cout << "ID\t\tCNP client\t\tSerie masina\t\t\tData inceput-sfarsit" << endl;
            for(Inchirieri inchiriere:inchirieri)
            {
                cout << inchiriere.ConversieLaSir();
            }
            break;
        case 'Q':
        {
            string retClient,nume,prenume,cnp,id;
            cout << "Introduceti numele clientului:" ;
            cin >> nume;
            cout << "Introduceti prenumele clientului: ";
            cin >> prenume;
            do
            {
                cout << "Introduceti CNP-ul clientului: ";
                cin >> cnp;
            }
            while(cnp.length()!=LUNGIME_CNP);
            cout<< "Introduceti id-urile separate prin \'-\': ";
            cin >> id;
            retClient = nume+","+prenume+","+cnp+","+id;
            Client *client = new Client(retClient);
            clienti.push_back(*client);
            fisier.AddClient(*client);
            break;
        }
        case 'W':
        {
            string retAngajat,nume,prenume,cnp,functie;
            cout << "Introduceti numele angajatului:" ;
            cin >> nume;
            cout << "Introduceti prenumele clientului: ";
            cin >> prenume;
            do
            {
                cout << "Introduceti CNP-ul clientului: ";
                cin >> cnp;
            }
            while(cnp.length()!=LUNGIME_CNP);
            cout<< "Introduceti functia angajatului: ";
            cin >> functie;
            retAngajat = nume+","+prenume+","+cnp+","+functie;
            Angajat *angajat = new Angajat(retAngajat);
            angajati.push_back(*angajat);
            fisier.AddAngajat(*angajat);
            break;
        }
        case 'E':
        {

            string retMasina,nrModel,serie;
            int pret;
            cout << "Introduceti numarul corespunzator modelului: ";
            cin >> nrModel;
            cout << "Introduceti seria sasiului: ";
            cin >> serie;
            cout << "Introduceti pretul: ";
            cin >> pret;
            retMasina = nrModel+","+serie+","+to_string(pret);
            Masina *masina = new Masina(retMasina);
            masini.push_back(*masina);
            fisier.AddMasina(*masina);
        }
        break;
         case 'R':
        {
            string retInchiriere,cnpClient,serieMasina,dataInc,dataTer;
            int id_inchiriere;
            cout << "Introduceti ID-ul rezervarii: ";
            cin >> id_inchiriere;
            cout << "Introduceti CNP-ul clientului: ";
            cin >> cnpClient;
            cout << "Introduceti seria de sasiu a masinii: ";
            cin >> serieMasina;
            cout << "Introduceti data inceperii (sub forma dd/mm/yyyy): ";
            cin >> dataInc;
            cout << "Introduceti data terminarii (sub forma dd/mm/yyyy): ";
            cin >> dataTer;
            retInchiriere = to_string(id_inchiriere)+","+cnpClient+","+serieMasina+","+dataInc+","+dataTer;
            Inchirieri *inchiriere = new Inchirieri(retInchiriere);
            inchirieri.push_back(*inchiriere);
            fisier.AddInchiriere(*inchiriere);
        }
        break;
        case 'A':
        {
            string numeClientCautat,prenumeClientCautat;
            cout << "Cautare client:"<<endl;
            cout << "Introduceti numele: ";
            cin >> numeClientCautat;
            cout << "Introduceti prenumele: ";
            cin >> prenumeClientCautat;
            Client client_cautat = fisier.GetClient(numeClientCautat,prenumeClientCautat);
            system("cls");
            cout <<"Nume si prenume\t\t\tCNP\t\t\tId inchirieri"<<endl;
            cout << client_cautat.ConversieLaSir();
        }
        break;
        case 'S':
        {
            string numeAngajatCautat,prenumeAngajatCautat;
            cout << "Cautare angajat:"<<endl;
            cout << "Introduceti numele: ";
            cin >> numeAngajatCautat;
            cout << "Introduceti prenumele: ";
            cin >> prenumeAngajatCautat;
            Angajat angajat_cautat = fisier.GetAngajat(numeAngajatCautat,prenumeAngajatCautat);
            system("cls");
            cout <<"Nume si prenume\t\t\tCNP\t\t\tFunctie" << endl;
            cout << angajat_cautat.ConversieLaSir();
            break;
        }
        case 'D':
        {
            string _serie;
            cout << "Cautare masina:"<<endl;
            cout << "Introduceti seria masinii cautate: ";
            cin >> _serie;
            Masina masina_cautata = fisier.GetMasina(_serie);
            system("cls");
            cout <<"Model\t\t\tSerie\t\t\tPret" << endl;
            cout << masina_cautata.ConversieLaSir();
            break;
        }
        case 'F':
        {
            int id_cautat;
            cout << "Cautare inchiriere:"<<endl;
            cout << "Introduceti id-ul corespunzator inchirierii: ";
            cin >> id_cautat;
            Inchirieri inchiriere_cautata = fisier.GetInchiriere(to_string(id_cautat));
            system("cls");
            cout << "ID\t\tCNP client\t\tSerie masina\t\t\tData inceput-sfarsit" << endl;
            cout << inchiriere_cautata.ConversieLaSir();
            break;
        }
        case 'Z':
        {
            string numeClientCautat,prenumeClientCautat,update;
            cout << "Modificare client:"<<endl;
            cout << "Introduceti numele: ";
            cin >> numeClientCautat;
            cout << "Introduceti prenumele: ";
            cin >> prenumeClientCautat;
            Client client_cautat = fisier.GetClient(numeClientCautat,prenumeClientCautat);
            cout << "Selecteaza ceea ce doresti sa modifici (n-nume, p-prenume, c-cnp, cp=CNP+prenume, etc.)"<<endl;
            cin >> update;
            int i=0;
            while(clienti[i].CNP!=client_cautat.CNP)
            {
                i++;
            }
            if(update.find('n')!=string::npos)
            {
                cout << "Update nume: ";
                cin >> clienti[i].Nume;
            }
            if(update.find('p')!=string::npos)
            {
                cout << "Update prenume: ";
                cin >> clienti[i].Prenume;
            }
            if(update.find('c')!=string::npos)
            {
                cout << "Update CNP: ";
                cin >> clienti[i].CNP;
            }
            fisier.UpdateFisierClienti(clienti);
            cout << "Modificare realizata cu succes!";
        }
        break;
        case 'X':
        {
            string numeAngajatCautat,prenumeAngajatCautat,update;
            cout << "Cautare angajat:"<<endl;
            cout << "Introduceti numele: ";
            cin >> numeAngajatCautat;
            cout << "Introduceti prenumele: ";
            cin >> prenumeAngajatCautat;
            Angajat angajat_cautat = fisier.GetAngajat(numeAngajatCautat,prenumeAngajatCautat);
            cout << "Selecteaza ceea ce doresti sa modifici (n-nume, p-prenume, c-cnp,f-functie, cp=CNP+prenume, etc.)"<<endl;
            cin >> update;
            int i=0;
            while(angajati[i].CNP!=angajat_cautat.CNP)
            {
                i++;
            }
            if(update.find('n')!=string::npos)
            {
                cout << "Update nume: ";
                cin >> angajati[i].Nume;
            }
            if(update.find('p')!=string::npos)
            {
                cout << "Update prenume: ";
                cin >> angajati[i].Prenume;
            }
            if(update.find('c')!=string::npos)
            {
                cout << "Update CNP: ";
                cin >> angajati[i].CNP;
            }
            if(update.find('f')!=string::npos)
            {
                cout << "Update functie: ";
                cin >> angajati[i].Functie;
            }
            fisier.UpdateFisierClienti(clienti);
            cout << "Modificare realizata cu succes!";
        }
        break;
         case 'V':
        {
            string update;
            int id_cautat;
            cout << "Cautare inchiriere:"<<endl;
            cout << "Introduceti id-ul corespunzator inchirierii: ";
            cin >> id_cautat;
            Inchirieri inchiriere_cautata = fisier.GetInchiriere(to_string(id_cautat));
            cout << "Selecteaza ceea ce doresti sa modifici (c-cnp, s-serie, i-data incepere,t-data terminare, cs=CNP+serie sasiu, etc.)"<<endl;
            cin >> update;
            int i=0;
            while(inchirieri[i].ID_inchiriere!=inchiriere_cautata.ID_inchiriere)
            {
                i++;
            }
            if(update.find('c')!=string::npos)
            {
                cout << "Update cnp client: ";
                cin >> inchirieri[i].CNP_client;
            }
            if(update.find('s')!=string::npos)
            {
                cout << "Update serie sasiu masina: ";
                cin >> inchirieri[i].serieMasina;
            }
            if(update.find('i')!=string::npos)
            {
                cout << "Update data incepere: ";
                cin >> inchirieri[i].dataIncepere;
            }
            if(update.find('t')!=string::npos)
            {
                cout << "Update data terminare: ";
                cin >> inchirieri[i].dataTerminare;
            }
            fisier.UpdateFisierInchirieri(inchirieri);
            cout << "Modificare realizata cu succes!";
        }
        break;
        case 'I':
            return ;
            break;
        default:
            cout << "Optiune inexistenta!";

        }
        getch();
    }

}
