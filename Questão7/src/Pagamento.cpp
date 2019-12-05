//Pagamento.cpp

#include "Pagamento.h"
#include <string>
#include "ControleDePagamentos.h"

using namespace std;

Pagamento::Pagamento()
{
    this->valorPagamento = 0;
    this->nomeDoFuncionario = ".";
}

Pagamento::Pagamento(double valor, string nome){
    this->valorPagamento = valor;
    this->nomeDoFuncionario = nome;
}

double Pagamento::getValorPagamento(){
    return this->valorPagamento;
}
void Pagamento::setValorPagamento(double pagamento){
    this->valorPagamento = pagamento;
}
string Pagamento::getNomedoFuncionario(){
    return this->nomeDoFuncionario;
}
void Pagamento::setNomedoFuncionario(string nome){
    this->nomeDoFuncionario = nome;
}

Pagamento::~Pagamento()
{
    //dtor
}
