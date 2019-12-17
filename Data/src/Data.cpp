#include "Data.h"

Data::Data()
{
    dia = 1;
    mes = 1;
    ano = 0001;

}
Data::Data(int dia, int mes, int ano)
{
    dia = (dia >= 1) && (dia <= 31) ? dia : 1;
    mes = (mes >= 1) && (mes <= 12) ? mes : 1;
}
int Data::getDia(){
    return dia;
}

int Data::getMes(){
    return mes;
}

int Data::getAno(){
    return ano;
}

void Data::setDia(int dia){
    this->dia = dia;
}
void Data::setMes(int mes){
    this->mes = mes;
}
void Data::setAno(int ano){
    this->ano = ano;
}

void Data::compara(Data data1){
    if((this->dia == data1.getDia) && (this->mes == data1.getMes()) && (this->ano == data1.getAno())){
        return 0;
    }
    if(this->ano > data1.ano){
        return 1;
    }else{
        return -1;
    }
     if(this->ano == data1.getAno() && this->mes > data1.getMes(){
        return 1;
    }else{
        return -1;
    }
    if( (this->mes == data1.getMes()) && (this->ano == data1.getAno() && (this->dia > data1.getDia)) {
        return 1;
    }else{
        return -1;
    }
}

std::string Data::getMesExtenso(){
    switch (this->mes)
    {
    case 1:
        return "Janeiro";
        break;

     case 2:
        return "Fevereiro";
        break;

     case 3:
        return "Marco";
        break;

     case 4:
        return "Abril";
        break;

     case 5:
        return "Maior";
        break;

     case 6:
        return "Junho";
        break;

     case 7:
        return"Julho";
        break;

     case 8:
        return "Agosto";
        break;

     case 9:
        return "Setembro";
        break;

     case 10:
        return "Outubro";
        break;

     case 11:
        return "Novembro";
        break;

     case 12:
        return "Dezembro";
        break;

     default:

        break;
    }
}
std::string Data::isBissexto(){
    if((this->ano%4 == 0) && (this->ano %100 != 0)){
        count <<"\nEH BISSEXTO"<<endl;
    }else if((this->ano %100 != 0) && (this->ano %400 == 0)){
        count <<"\nEH BISSEXTO"<<endl;
    }else{
         count <<"\nNAO EH BISSEXTO"<<endl;
    }
}

}

Data::~Data()
{
    //dtor
}
