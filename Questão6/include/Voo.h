#ifndef VOO_H
#define VOO_H
#include <string>
#include "Horario.h"
#include "Data.h"

using namespace std;

class Voo : public Horario
{
    public:
        Voo(int);
        Voo(bool,bool, Horario);
        bool setOcupado(int);
        int proximolivre();
        string verifica(int);
        int vagas();
        int getNumvoo(int);
        string getData(int);
        string getHorario(int);

    protected:

    private:
        bool Voos[100];
        bool Lugares[100];
        Horario varhorario;
        int numerovoo = 0;
};

#endif // VOO_H
