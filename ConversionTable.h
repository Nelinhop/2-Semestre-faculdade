#ifndef CONVERSIONTABLE_H
#define CONVERSIONTABLE_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ConversionTable{
    private:
        vector<pair<char,char>> tabela;
        int Deslocamento;

    public:
        ConversionTable();
        void NovaTabela(int CdAluno);
        char Converter(char letra);
        char Desfazer(char letra);
        ~ConversionTable();

};

#endif

