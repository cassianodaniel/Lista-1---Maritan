#ifndef DATA_H
#define DATA_H

using namespace std;

class Data
{
    public:
        Data();
        Data(int, int, int);
        int getDia();
        int getAno();
        int getMes();
        int compara(Data);
        string getMesExtenso(int);
        bool isBisexto(int);
        void setDia(int, int, int);
        void setMes(int);
        void setAno(int);
        virtual ~Data();

    protected:
        int Dia, Mes, Ano;
};

#endif // DATA_H
