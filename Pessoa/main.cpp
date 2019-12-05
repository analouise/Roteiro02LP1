#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
    Pessoa pessoa1 = Pessoa("ana",18,"(88)99235-2410");

    cout<<"Nome: "<< pessoa1.getNome()<< "\nIdade: "<< pessoa1.getIdade()<<"\nTelefone: "<< pessoa1.getTelefone()<<endl;
    return 0;
}
