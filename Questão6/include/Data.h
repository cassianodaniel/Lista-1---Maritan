#ifndef DATA_H
#define DATA_H

#include <string>

using namespace std;

class Data{
    public:
        Data();
        virtual ~Data();
        int getDia();
        int getMes();
        int getAno();
        void setDia(int);
        void setMes(int);
        void setAno(int);
    protected:
        int Dia;
        int Mes;
        int Ano;
    private:
};

#endif // DATA_H
