//Pagamento.h

#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>

using namespace std;

class Pagamento
{
    public:
        Pagamento();
        Pagamento(double, string);
        virtual ~Pagamento();
        double getValorPagamento();
        void setValorPagamento(double);
        string getNomedoFuncionario();
        void setNomedoFuncionario(string);


    protected:

    private:
    double valorPagamento;
    string nomeDoFuncionario;
};

#endif // PAGAMENTO_H
