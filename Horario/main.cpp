#include <iostream>
#include "Horario.h"

using namespace std;

int main()
{
    Horario horario1 = Horario(10,58,60);

    cout<<horario1.getHora()<<":"<< horario1.getMinuto()<<":"<<horario1.getSegundo()<<endl;
    horario1.avancarHorario();
    cout<<horario1.getHora()<<":"<< horario1.getMinuto()<<":"<<horario1.getSegundo()<<endl;
    return 0;

}
