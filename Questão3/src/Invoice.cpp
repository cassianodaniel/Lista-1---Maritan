//Invoice.cpp

#include "Invoice.h"
#include <string>
using namespace std;

    Invoice::Invoice()
    {
        int Numero = 0;
        string Descricao = ".";
        int Quantidade = 0;
        double Item = 0.0;
    }
    Invoice::Invoice(int numero, string descricao, int quantidade, double item){
        this->Numero = numero;
        this->Descricao = descricao;
        this->Quantidade = quantidade;
        this->Item = item;
    }

    int Invoice::getNumero(){
        return this->Numero;
    };
    void Invoice::setNumero(int numero){
        this->Numero = numero;
    };
    string Invoice::getDescricao(){
        return Descricao;
    };
    void Invoice::setDescricao(string descricao){
        this->Descricao = descricao;
    };
    int Invoice::getQuantidade(){
        return this->Quantidade;
    };
    void Invoice::setQuantidade(int quantidade){
        this->Quantidade = quantidade;
    };
    double Invoice::getItem(){
        return this->Item;
    };
    void Invoice::setItem(double item){
        this->Item = item;
    };
    double Invoice::getInvoiceAmount(){
        if(Quantidade*Item < 0){
            return 0.0;
        }
        else if(Quantidade*Item >= 0){
            return (Quantidade*Item);
        }
    }

Invoice::~Invoice()
{
    //dtor
}
