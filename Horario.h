#ifndef HORARIO_H
#define HORARIO_H


class Horario
{
    public:
        Horario(int horas, int minutos, int segundos);
        Horario();
        virtual ~Horario();

        void AvancarHorario(int horas, int minutos, int segundos);

        int getHora();
        int getMinuto();
        int getSegundo();

        void setH(int horas);
        void setM(int minutos);
        void setS(int segundos);

    protected:
    int horas;
    int minutos;
    int segundos;
    private:
};

#endif // HORARIO_H
