//Horario.cpp
#include "Horario.h"
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

Horario::Horario()
{
    Hora = 0;
    Minuto = 0;
    Segundo = 0;
}

Horario::Horario(int h,int m,int s){
//CONDICIONAIS PRÉ-DETERMINADOS
//VALORES QUE NÃO PODEM SER CONFIGURADOS
//COMO HORÁRIOS NOS PARÂMETROS
    if(h >= 24 || h < 0){
        this->Hora = 0;
        this->Minuto = 0;
        this->Segundo = 0;
    }//_____________________________
    if(m >= 60 || m < 0){
        this->Hora = 0;
        this->Minuto = 0;
        this->Segundo = 0;
    }
    //______________________________
    if(s >= 60 || s < 0){
        this->Hora = 0;
        this->Minuto = 0;
        this->Segundo = 0;
    }
    //______________________________
    if(h<=23){
        Hora = h;
    }
    //______________________________
    if(m <=59){
        Minuto = m;
    }//_____________________________
    if(s <= 59){
        Segundo = s;
    }
}

void Horario::setHorario(int h,int m, int s){
    if(h >= 24 || h < 0){
        this->Hora = 0;
        this->Minuto = 0;
        this->Segundo = 0;
    }//_____________________________
    if(m >= 60 || m < 0){
        this->Hora = 0;
        this->Minuto = 0;
        this->Segundo = 0;
    }
    //______________________________
    if(s >= 60 || s < 0){
        this->Hora = 0;
        this->Minuto = 0;
        this->Segundo = 0;
    }
    //______________________________
    if(h<=23){
        Hora = h;
    }
    //______________________________
    if(m <=59){
        Minuto = m;
    }//_____________________________
    if(s <= 59){
        Segundo = s;
    }
}

int Horario::getHora(){
    return this->Hora;
}

int Horario::getMinuto(){
    return this->Minuto;
}

int Horario::getSegundo(){
    return this->Segundo;
}

void Horario::setHora(int h){
    if(h >= 24 || h < 0){
        this->Hora = 0;
        this->Minuto = 0;
        this->Segundo = 0;
    }else{
        this->Hora = h;
    }
}

void Horario::setMinuto(int m){
    if(m >= 60 || m < 0){
        this->Hora = 0;
        this->Minuto = 0;
        this->Segundo = 0;
    }else{
        this->Minuto = m;
    }
}

void Horario::setSegundo(int s){
    if(s >= 60 || s < 0){
        this->Hora = 0;
        this->Minuto = 0;
        this->Segundo = 0;
    }else{
        this->Segundo = s;
    }
}

void Horario::avancarHorario(){
    this->Segundo += 1;
    if(Segundo == 60){
        Minuto += 1;
        Segundo = 0;
    }
    if(Minuto == 60){
        Hora += 1;
        Minuto = 0;
    }
    if(Hora == 24){
        this->Hora = 0;
        this->Minuto = 0;
        this->Segundo = 0;
    }
}

string Horario::toString(){
    stringstream varauxtostring;
    varauxtostring << "Horário: " << this->Hora << ":" << this->Minuto << ":" << this->Segundo << "\n" ;
    return varauxtostring.str();
}


