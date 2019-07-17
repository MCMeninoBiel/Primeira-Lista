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
