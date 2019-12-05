//main.cpp

#include <iostream>
#include <string>
#include <Pagamento.h>
#include <ControleDePagamentos.h>

using namespace std;

int main()
{

    ControleDePagamentos objeto1;
    Pagamento objeto2 = Pagamento(200.5, "Salsicha");
    objeto1.setPagamentos(objeto2, 0);

    Pagamento objeto3 = Pagamento(220.5, "Coca-cola");
    objeto1.setPagamentos(objeto3, 1);

    cout << objeto2.getValorPagamento() << endl;
    cout << objeto3.getValorPagamento() << endl;
    cout << objeto1.calculaTotalDePagamentos() << endl;
    return 0;
}
