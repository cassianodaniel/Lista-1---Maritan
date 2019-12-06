//Horario.h
#ifndef HORARIO_H
#define HORARIO_H
#include <string>

using namespace std;

class Horario
{
    public:
        Horario();
        Horario(int,int,int);
        void setHorario(int,int,int);
        int getHora();
        int getMinuto();
        int getSegundo();
        void setHora(int);
        void setMinuto(int);
        void setSegundo(int);
        void avancarHorario(); //Segundo += 1;
        string toString();

    protected:
        int Hora;
        int Minuto;
        int Segundo;
    private:
};
#endif // HORARIO_H
