//main.cpp
#include <iostream>
#include "Horario.h"
#include <string>
#include <locale.h>
#include <chrono>
#include <thread>

using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");
    cout << "Relógio DANIEL CASSIANO:" << endl;
    Horario relogio = Horario(23,58,59);
    cout << relogio.toString();
    relogio.avancarHorario();
    cout << relogio.toString();
    //avancaminuto
    for(int i=0; i<60; i++){
        relogio.avancarHorario();
        cout << relogio.toString();
    }
    relogio.setHorario(10,59,00);
    for(int i=0; i<60; i++){
        relogio.avancarHorario();
        cout << relogio.toString();
    }

    puts("Teste de set inválido a seguir: O horário configurado nesse momento é:");
    relogio.setHorario(11,40,30);
        cout << relogio.toString() << endl;
    puts("HORÁ INVÁLIDA SETADA = -30:");
        relogio.setHora(-30);
        cout << relogio.toString() << endl;
    puts("Teste de set inválido a seguir: O horário configurado nesse momento é:");
        relogio.setHorario(11,40,30);
        cout << relogio.toString() << endl;
    puts("HORÁ INVÁLIDA SETADA = 25:");
        relogio.setHora(25);
        cout << relogio.toString() << endl;
    puts("Teste de set inválido a seguir: O horário configurado nesse momento é:");
        relogio.setHorario(11,40,30);
        cout << relogio.toString() << endl;
    puts("MINUTO INVÁLIDO SETADO = -1:");
        relogio.setMinuto(-1);
        cout << relogio.toString() << endl;
    puts("Teste de set inválido a seguir: O horário configurado nesse momento é:");
        relogio.setHorario(11,40,30);
        cout << relogio.toString();
    puts("MINUTO INVÁLIDO SETADO = 61:");
        relogio.setMinuto(61);
        cout << relogio.toString() << endl;
    puts("Teste de set inválido a seguir: O horário configurado nesse momento é:");
        relogio.setHorario(11,40,30);
        cout << relogio.toString() << endl;
    puts("SEGUNDO INVÁLIDO SETADO = -1:");
        relogio.setSegundo(-1);
        cout << relogio.toString() << endl;
    puts("Teste de set inválido a seguir: O horário configurado nesse momento é:");
        relogio.setHorario(11,40,30);
        cout << relogio.toString() << endl;
    puts("SEGUNDO INVÁLIDO SETADO = 61:");
        relogio.setSegundo(61);
    cout << relogio.toString() << endl;
    puts("Fim dos testes.");

    return 0;
}
