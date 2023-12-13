#ifndef CYPHER_H
#define CYPHER_H
#include "ConversionTable.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Cypher{

    private:
        ConversionTable *tabela;
        int Codigo;
        string Texto;
        string Encryptedtxt;
        string Decryptedtxt;

    public:
        Cypher(int CdAluno);
        void Encriptar();
        void Decriptar();
        void Novocd(int CdAluno);
        void Novotexto(string Texto);

        ~Cypher();
};

#endif


