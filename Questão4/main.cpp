#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
    int retorno;

    Data *hoje = new Data(05, 12, 2019);
    Data ontem = Data(04, 12, 2019);

    cout << "Gets:" << endl;

    cout << hoje->getDia() << "/" << hoje->getMes() << "/" << hoje->getAno() << endl;
    cout << ontem.getDia() << "/" << ontem.getMes() << "/" << ontem.getAno() << endl;

    cout << "Comparações:" << endl;

    cout << hoje->compara(ontem) << endl;

    hoje->setAno(2000);

    cout << hoje->compara(ontem) << endl;

    ontem.setDia(31, 12, 2019);
    ontem.setAno(2000);

    cout << hoje->compara(ontem) << endl;
    cout << ontem.compara(ontem) << endl;

    ontem.setAno(2004);

    cout << "Verificar bissextos:" << endl;

    cout << hoje->isBisexto(hoje->getAno()) << endl;
    cout << ontem.isBisexto(ontem.getAno()) << endl;

    return 0;
}
