//main

#include <iostream>
#include <string>
#include <Invoice.h>

using namespace std;

int main()
{
    Invoice();
    Invoice objeto1 = Invoice(1,"Daniel", 1, 2.5);
    cout << objeto1.getNumero() << endl;
    cout << objeto1.getDescricao() << endl;
    cout << objeto1.getQuantidade() << endl;
    cout << objeto1.getItem() << endl;
    return 0;
}
