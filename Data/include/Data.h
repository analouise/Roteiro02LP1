#ifndef DATA_H
#define DATA_H
#include <string>

class Data
{
    public:
        Data();
        Data(int dia, int mes, int ano);
        virtual ~Data();

        int getDia();
        int getMes();
        int getAno();

        void setDia(int dia);
        void setMes(int mes);
        void setAno(int ano);


        std::string getMesExtenso();
        std::string isBissexto();
        void compara(Data data1);

    private:
         int dia, mes, ano;
};

#endif // DATA_H
