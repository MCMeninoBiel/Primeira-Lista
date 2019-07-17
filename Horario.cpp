#include "Horario.h"

Horario::Horario(int horas, int minutos, int segundos)
{
    if(((horas>=0)&&(horas<24))&&((minutos>=0)&&(minutos<60))&&((segundos>=0)&&(segundos<60)))
    {
        this -> horas = horas;
        this -> minutos = minutos;
        this -> segundos = segundos;
    }else
        this -> horas = 00;
        this -> minutos = 00;
        this -> segundos = 00;
}


Horario::Horario()
{
    //ctor
}

Horario::~Horario()
{
    //dtor
}

void Horario::AvancarHorario(int horas, int minutos, int segundos)
{
    if ((horas!=23)&&(minutos!=59)&&(segundos!=59))
        {
            this-> segundos++;
        }

    else if (((horas!=23)&&(minutos!=59))&&(segundos==59))
        {
            this->minutos++;
            this->segundos = 00;
        }

    else if (((horas!=23)&&(minutos==59))&&(segundos==59))
        {
            this->horas++;
            this->minutos = 00;
            this->segundos = 00;
        }

    else if (((horas==23)&&(minutos==59))&&(segundos==59))
        {
            this->horas = 00;
            this->minutos = 00;
            this->segundos = 00;
        }


}

int Horario::getHora()
{
    return this->horas;
}
int Horario::getMinuto()
{
    return this->minutos;
}
int Horario::getSegundo()
{
    return this->segundos;
}

void Horario::setH(int horas)
{
    this-> horas = horas;
}
void Horario::setM(int minutos)
{
    this-> minutos = minutos;
}
void Horario::setS(int segundos)
{
    this-> segundos = segundos;
}
