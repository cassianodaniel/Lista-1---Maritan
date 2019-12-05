//Pessoa.cpp

#include "Pessoa.h"
#include <string>

using namespace std;

Pessoa::Pessoa()
{
    this->Nome = ".";
    this->Idade = 0;
    this->Telefone = "0";
}

Pessoa::Pessoa(string nome)
{
    Nome = nome;
    int Idade = 1;
    string Telefone = "Não disponível";
}

Pessoa::Pessoa(string nome, int idade, string telefone)
{
    Nome = nome;
    Idade = idade;
    Telefone = telefone;
}

string Pessoa::getNome(){
return this->Nome;
}

int Pessoa::getIdade(){
return this->Idade;
}

string Pessoa::getTelefone(){
return this->Telefone;
}

void Pessoa::setNome(string nome){
this->Nome = nome;
}

void Pessoa::setIdade(int idade){
this->Idade = idade;
}

void Pessoa::setTelefone(string telefone){
this->Telefone = telefone;
}

Pessoa::~Pessoa()
{
    //dtor
}
