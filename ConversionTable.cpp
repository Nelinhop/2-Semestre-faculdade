#include "ConversionTable.h"
#include "Cypher.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

ConversionTable::ConversionTable(){

}
void ConversionTable::NovaTabela(int CdAluno){
    Deslocamento = CdAluno%20;
    for(size_t i=0;i<256;i++)
    {
        pair<char,char> p;
        p.first=i;
        p.second=p.first+Deslocamento;
        tabela.push_back(p);
    }
}

ConversionTable::~ConversionTable(){
    cout << "Destrutor inicializado" << endl;
}

char ConversionTable::Converter(char letra){
    return tabela.at(letra).second;
}

char ConversionTable::Desfazer(char letra)
{
    return tabela.at(letra-Deslocamento).first;
}
