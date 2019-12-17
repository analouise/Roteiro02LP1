#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
     Data data1 = Data(2,10,2006);
     Data data2 = Data(4, 10,2018);

     cout<<"Data: "<<data1.getDia()<<"/"<<data1.getMes()<<"/"<<data1.getAno()<<endl;

     cout<< data1.getMesExtenso()<<endl;
     cout<< data1.isBissexto()<<endl;
     cout<<"Data: "<<data1.compara(data2)<<endl;

    return 0;
}
