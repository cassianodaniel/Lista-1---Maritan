//Invoice.h

#ifndef INVOICE_H
#define INVOICE_H
#include <string>
using namespace std;

class Invoice
{
    public:
        Invoice();
        Invoice(int numero, string descricao, int quantidade, double item);
        virtual ~Invoice();
        int getNumero();
        void setNumero(int numero);
        string getDescricao();
        void setDescricao(string descricao);
        int getQuantidade();
        void setQuantidade(int quantidade);
        double getItem();
        void setItem(double item);
        double getInvoiceAmount();
    protected:

    private:
        int Numero;
        string Descricao;
        int Quantidade;
        double Item;
};

#endif // INVOICE_H
