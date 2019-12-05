//ControleDePagamentos.cpp

#include "ControleDePagamentos.h"
#include <string>

using namespace std;
ControleDePagamentos::ControleDePagamentos()
{
    //ctor
}
void ControleDePagamentos::setPagamentos(Pagamento p, int pos){
    pagamentos[pos] = p;
}
double ControleDePagamentos::calculaTotalDePagamentos(){
    double x;
    for(int i=0; i<100; i++){
        x += pagamentos[i].getValorPagamento();
    }
    return x;
}
bool ControleDePagamentos::existePagamentoParaFuncionario(string nomeFuncionario){
    for(int i=0; i<100; i++){
        if (this->pagamentos[i].getNomedoFuncionario() == nomeFuncionario){
            return true;
        }
        else{
            return false;
        }
    }
}

ControleDePagamentos::~ControleDePagamentos()
{
    //dtor
}
