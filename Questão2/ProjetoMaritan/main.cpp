//main.cpp

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <Pessoa.h>

using namespace std;

int main()
{
Pessoa pessoa1 = Pessoa("Daniel", 15, "99835-4294");
pessoa1.setIdade(19);
pessoa1.setNome("Ludwig van Beethoven");
pessoa1.setTelefone("4002-8922");

cout << "Nome: " << pessoa1.getNome() << endl;
cout << "Idade: " << pessoa1.getIdade() << endl;
cout << "Telefone: " << pessoa1.getTelefone() << endl;

return 0;
}
