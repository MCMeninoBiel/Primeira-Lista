#include "Data.h"


Data::Data(int dia, int mes, int ano)
{
if((dia >= 1)&&(dia <= 31)){
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}else
    this->dia = 1;
    this->mes = 1;
    this->ano = 1;
}

Data::Data()
{
    //ctor
}

Data::~Data()
{
    //dtor
}

Data::Compara(int dia, int mes, int ano)
{
    if((dia==16)&&(mes==7)&&(ano==2019)){
        return 0;
    }

    if(((dia>16)&&(mes>=7)&&(ano>=2019))||((mes>=7)&&(ano>=2019))||(ano>2019)){
        return -1;
    }

    if(((dia<16)&&(mes<=7)&&(ano<=2019))||((mes<=7)&&(ano<=2019))||(ano<2019)){
        return 1;
    }
}

std::string Data::getMesExtenso(int mes)
{
    switch (mes)
    {
    case 1:
        return "janeiro";
    break;

    case 2:
        return "fevereiro";
    break;

    case 3:
        return "marco";
    break;

    case 4:
        return "abril";
    break;

    case 5:
        return "maio";
    break;

    case 6:
        return "junho";
    break;

    case 7:
        return "julho";
    break;

    case 8:
        return "agosto";
    break;

    case 9:
        return "setembro";
    break;

    case 10:
        return "outubro";
    break;

    case 11:
        return "novembro";
    break;

    case 12:
        return "dezembro";
    break;
    }

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
    this -> dia = dia;
}

void Data::setMes(int mes){
    this -> mes = mes;
}
void Data::setAno(int ano){
    this -> ano = ano;
}

bool Data::isBissexto(int ano){
    if ((ano % 2)==1)
    {
        return 0;
    }else
        return 1;
}
