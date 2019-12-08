#include "Data.h"
#include <string>

using namespace std;

Data::Data()
{
    this->Ano = 1;
    this->Dia = 1;
    this->Mes = 1;
}
int Data::getDia(){
    return Dia;
}
int Data::getMes(){
    return Mes;
}

int Data::getAno(){
    return Ano;
}

void Data::setDia(int d){
    this->Dia = d;
}

void Data::setMes(int m){
    this->Mes = m;
}

void Data::setAno(int a){
    this->Ano = a;
}

Data::~Data()
{
    //dtor
}
