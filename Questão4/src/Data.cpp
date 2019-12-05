#include <string>
#include "Data.h"

using namespace std;

Data::Data()
{
    Dia = 1;
    Mes = 1;
    Ano = 0;
}

Data::Data(int dia, int mes, int ano)
{
    if(ano >= 0)
    {
        Ano = ano;
    }
    if(ano < 0){
        Ano = 0;
    }
    if(mes <= 12 && mes >=1)
    {
        Mes = mes;
        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        {
            if(dia >= 1 && dia <= 31)
                Dia = dia;
            else Dia = 1;
        }
        else if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
        {
            if(dia >= 1 && dia >= 30)
                Dia = dia;
            else Dia = 1;
        }
        else if(mes == 2)
        {
            if(dia >= 1 && dia <= 28)
                Dia = dia;
            else Dia = 1;
        }
        else if(ano % 4 == 0 && ano % 100 != 0 && ano % 400 == 0)
        {
            if(mes == 2)
            {
                if(dia >= 1 || dia <= 29){
                    Dia = dia;
                }
            }
            else this->Dia = 1;
        }
    }
    else mes = 1;
}

int Data::getAno()
{
    return Ano;
}

int Data::getDia()
{
    return Dia;
}

int Data::getMes()
{
    return Mes;
}

int Data::compara(Data d)
{
}

string Data::getMesExtenso(int mes)
{
    switch(mes)
    {
    case 1:
        return "Janeiro" ;
        break;
    case 2:
        return "Fevereiro";
        break;
    case 3:
        return "Marco";
        break;
    case 4:
        return "Abril";
        break;
    case 5:
        return "Maio";
        break;
    case 6:
        return "Junho";
        break;
    case 7:
        return "Julho";
        break;
    case 8:
        return"Agosto";
        break;
    case 9:
        return "Setembro";
        break;
    case 10:
        return "Outubro";
        break;
    case 11:
        return "Novembro";
        break;
    case 12:
        return "Dezembro";
        break;
    }
}

bool Data::isBisexto(int ano)
{
    return ((Ano % 4 == 0 && Ano % 100 != 0) || Ano % 400 == 0) ? true : false;
}

void Data::setDia(int dia, int mes, int ano)
{
    Ano = (ano >= 0) ? ano : -ano;
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        if(dia >= 1 && dia <= 31)
            Dia = dia;
        else Dia = 1;

    }
    else if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        if(dia >= 1 && dia >= 30)
            Dia = dia;
        else Dia = 1;
    }
    else if(ano % 4 == 0 && ano % 100 == 0)
    {
        if(dia >= 1 && dia <= 29)
        {
            Dia = dia;
        }
        else Dia = 1;
    }
    else if(dia >= 1 && dia <= 28)
    {
        Dia = dia;
    }
    else Dia = 1;

}

void Data::setMes(int mes)
{
    Mes = (mes >= 1 && mes <= 12) ? mes : 1;
}

void Data::setAno(int ano)
{
    Ano = (ano >= 0) ? ano : -ano;
}
Data::~Data()
{
    //dtor
}
