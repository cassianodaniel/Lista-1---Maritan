#include "Voo.h"
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

Voo::Voo(int numerodovoo)
{
    this->varhorario.setAno(2019);
    this->varhorario.setMes(1);
    this->varhorario.setDia(1);
    this->varhorario.setHora(0);
    this->varhorario.setMinuto(0);
    this->varhorario.setSegundo(0);
    for(int i=0; i<100; i++){
    this->Lugares[i] = false;
    this->Voos[i] = false;}
    this->numerovoo = numerodovoo;
}

bool Voo::setOcupado(int aux){
    if(this->Lugares[aux] == false){
        this->Lugares[aux] = true;
        return true;
    }else{
        return false;
    }
}

string Voo::verifica(int aux){
    if(this->Lugares[aux] == false){
        return "Desocupado";
    }else{
        return "Ocupado";
    }
}

int Voo::vagas(){
    int aux = 0;
        for(int i=0;i<100;i++){
            if(Lugares[i] == false){
                aux += aux;
            }
        }
    return aux;
}

int Voo::getNumvoo(int numerodovoo){
    return numerodovoo;
}

int Voo::proximolivre(){
    for(int i=0; i<100; i++){
        if(Lugares[i] == false){
                return i;
            }
        }
    }

string Voo::getData(int numerodovoo){
    stringstream varauxtostring;
    varauxtostring << "Dia: " << varhorario.getDia() << " Mês: " << varhorario.getMes() << " Ano: " << varhorario.getAno();
    return varauxtostring.str();
}

Voo::Voo(bool lugares, bool voos, Horario HORARIO){
    for(int i=0; i<100;i++){
        if(this->Lugares[i] == false){
            this->Lugares[i] = lugares;
        }else{
            puts("Lugar já cadastrado antes.");
        }
    }
    for(int i=0; i<100;i++){
        if(this->Voos[i] == false){
            this->Voos[i] = voos;
        }else{
            puts("Número de voo já cadastrado antes.");
        }
    }
    this->varhorario = HORARIO;
}

string Voo::getHorario(int numerodovoo){
    stringstream varauxtostring;
    varauxtostring << "Hora: " << varhorario.getHora() << " Minuto: " << varhorario.getMinuto() << " Segundo: " << varhorario.getSegundo();
    return varauxtostring.str();
}
