#include <iostream>
#include "Data.h"
#include <locale.h>

using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");
    int retorno;

    Data hoje = Data(05, 12, 2019);
    Data ontem = Data(04, 12, 2019);

    cout << "Métodos getDia/getMes/getAno:" << endl;

    cout << "Hoje: " << hoje.getDia() << "/" << hoje.getMes() << "/" << hoje.getAno() << endl;
    cout << "Ontem: " << ontem.getDia() << "/" << ontem.getMes() << "/" << ontem.getAno() << endl;
    cout << endl; //pulando linha


    cout << "Comparações: 05/12/2019 com 04/12/2019" << endl;
    cout << hoje.compara(ontem) << endl;
    puts("_____________________________________________________");

    cout << "Comparações: 05/12/2000 com 04/12/2019" << endl;
    hoje.setAno(2000);
    cout << hoje.compara(ontem) << endl;
    puts("_____________________________________________________");

    cout << "Comparações: 05/12/2000 com 31/12/2000" << endl;
    ontem.setDia(31, 12, 2019);
    ontem.setAno(2000);
    cout << hoje.compara(ontem) << endl;
    puts("_____________________________________________________");

    cout << "Comparações: 31/12/2000 com 31/12/2000" << endl;
    cout << ontem.compara(ontem) << endl;
    puts("_____________________________________________________");

    cout << endl; //pulando linha

    cout << "Verificar bissextos:" << endl;
    cout << "Datas setadas: a) 31/12/2000, b)31/12/2003" << endl;
    ontem.setAno(2003);

    cout << "Verificando se a) é bissexto: (1: É BISSEXTO / 0: NÃO É BISSEXTO)" << endl;
    cout << hoje.isBisexto(hoje.getAno()) << endl;
    cout << "Verificando se b) é bissexto: (1: É BISSEXTO / 0: NÃO É BISSEXTO)" << endl;
    cout << ontem.isBisexto(ontem.getAno()) << endl;

    return 0;
}
