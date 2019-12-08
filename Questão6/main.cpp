#include <iostream>
#include <Voo.h>
#include <Data.h>
#include <Horario.h>
#include <string>
#include <locale.h>

using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");
    Voo v1 = Voo(4);
    v1.setOcupado(0);
    puts("Verificando se a func. setOcupado,\n"
         "na cadeira número 0, já setada ocupada, está funcionando:");
    if(v1.verifica(0) == "Ocupado"){
        cout << "Cadeira ocupada.\n";
        cout << "setOcupado funcionando.\n"
        "_________________________________________________________________\n";
    }else{
        cout << "Cadeira não ocupada.\n";
        cout << "setOcupado funcionando.\n"
        "_________________________________________________________________\n";
    }
    cout << "Proxima cadeira livre:" << v1.proximolivre() << endl;
    cout << "Resta um total de " << v1.vagas() << " vagas\n" << endl;

    for(int i = 0; i < 5; i++){
        if(v1.verifica(i) == "Desocupado"){
            cout << "Cadeira numero " << i << " livre.\n";
        }else{
            cout << "Cadeira numero " << i << " ocupada.\n";
        }
    }

    cout << "Numero do voo: " << v1.getNumvoo(4) << endl; //numero4
    cout << "\nData: " << v1.getData(4) << endl;
    cout << "\nHorario: " << v1.getHora() <<":"<< v1.getMinuto() <<":"<< v1.getSegundo() << endl;

}
