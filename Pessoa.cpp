#include "Pessoa.h"
#include <string>
#include <iostream>

Pessoa::Pessoa(std::string telefone, int idade, std::string nome){
this -> telefone = telefone;
this -> idade = idade;
this -> nome = nome;
}

Pessoa::Pessoa()
{
    //ctor
}

Pessoa::~Pessoa()
{
    //dtor
}

std::string Pessoa::getTel(){
return telefone;
}
