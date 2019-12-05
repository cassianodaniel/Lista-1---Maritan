//Pessoa.h

#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using namespace std;

class Pessoa
{
    public:
        Pessoa();
        Pessoa(string);
        Pessoa(string, int, string);
        string getNome();
        int getIdade();
        string getTelefone();
        void setNome(string nome);
        void setIdade(int idade);
        void setTelefone(string telefone);
        virtual ~Pessoa();
    private:
        string Nome;
        int Idade;
        string Telefone;
};

#endif // PESSOA_H
