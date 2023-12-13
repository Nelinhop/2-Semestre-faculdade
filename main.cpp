#include "Cypher.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    string texto;
    int Cd;
    cout << "Insira seu codigo de matricula :" << endl;
    cin >> Cd;
    Cypher p(Cd);
    cout << endl;

    do{
        cout << "------------------------------" << endl;
        cout << "1-Inserir texto"          << endl;
        cout << "2-Inserir novo codigo"  << endl;
        cout << "3-Encriptar texto"        << endl;
        cout << "4-Decriptar texto"        << endl;
        cout << "0-Sair"                << endl;
        cout << "------------------------------" << endl;


        int menu;
        cin >> menu;
        cout << endl;

        switch(menu){
            case 1:
                cin.ignore();
                getline(cin,texto);
                p.Novotexto(texto);
                break;
            case 2:
                int Cd;
                cin >> Cd;
                p.Novocd(Cd);
                break;
            case 3:
                p.Encriptar();
                break;
            case 4:
                p.Decriptar();
                break;
            case 0:
                return 0;
                break;
        }

    }while(true);
}
