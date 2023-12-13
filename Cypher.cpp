#include "Cypher.h"
#include "ConversionTable.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

Cypher::Cypher(int CdAluno){
    cout << "Inicializando Cypher" << endl;
    tabela = new ConversionTable();
    tabela->NovaTabela(CdAluno);
}

Cypher::~Cypher(){
    delete tabela;
}

void Cypher::Encriptar(){
    if(Texto.size() == 0)
    {
        cout << "Text nao encontrado." << endl;
    }
    else
    {
        char chi;
        char cho;
        Encryptedtxt.clear();

        for(size_t i=0;i<Texto.length();i++)
        {
            chi=Texto.at(i);
            cho=tabela->Converter(chi);
            Encryptedtxt+=cho;
        }
        cout << Encryptedtxt << endl;
    }
}

void Cypher::Decriptar(){
    if(Texto.size() == 0)
    {
        cout << "Texto nao encontrado." << endl;
    }
    else
    {
        char chi;
        char cho;
        Decryptedtxt.clear();

        for(size_t i=0;i<Texto.length();i++)
        {
            chi=Texto.at(i);
            cho=tabela->Desfazer(chi);
            Decryptedtxt+=cho;
        }
        cout << Decryptedtxt << endl;
    }
}

void Cypher::Novocd(int CdAluno){
    tabela = new ConversionTable();
    tabela->NovaTabela(CdAluno);
    cout << "Novo metodo criado." << endl;
}

void Cypher::Novotexto(string txt){
    Texto=txt;
    cout << "Novo texto encontrado." << endl;
}

