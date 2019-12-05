#ifndef HORARIO_H
#define HORARIO_H


class Horario
{
    public:
        Horario();
        Horario(int hora, int minuto, int segundo);
        virtual ~Horario();

        int getHora();
        int getMinuto();
        int getSegundo();

        void setHora(int hora);
        void setMinuto(int minuto);
        void setSegundo(int segundo);

        void avancarHorario();

    protected:

    private:
        int hora, minuto, segundo;
};

#endif // HORARIO_H
