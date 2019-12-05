//ControleDePagamentos.cpp
#include <string>
#include "Pagamento.h"

using namespace std;

class ControleDePagamentos{
    public:
        ControleDePagamentos();
        void setPagamentos(Pagamento p, int pos);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario(string nomeFuncionario);
        ~ControleDePagamentos();

    protected:
        Pagamento pagamentos[100];
    private:
};
