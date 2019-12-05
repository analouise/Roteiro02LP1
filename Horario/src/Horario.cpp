#include "Horario.h"

Horario::Horario()
{
    hora = 00;
    minuto = 00;
    segundo = 00;
}
Horario::Horario(int hora, int minuto, int segundo)
{
    this->hora = (hora >= 0) && (hora <= 23) ? hora : 00;
    this->minuto = (minuto >= 0) && (minuto <= 60) ? minuto : 00;
    this->segundo = (segundo >= 0) && (segundo <= 60) ? segundo : 00;

}

int Horario::getHora(){
    return hora;
}
int Horario::getMinuto(){
    return minuto;
}
int Horario::getSegundo(){
    return segundo;
}
void Horario::setHora(int hora){
    this->hora = hora;
}
void Horario::setMinuto(int minuto){
    this->minuto = minuto;
}
void Horario::setSegundo(int segundo){
    this->segundo = segundo;
}

void Horario::avancarHorario(){
    segundo++;
     if(segundo>60){
        segundo = 0;
        minuto++;
        if(minuto>60){
            minuto = 0;
            hora++;
            if(minuto>60){
                minuto = 0;
                hora++;
            }
        }
     }
}

Horario::~Horario()
{
    //dtor
}
