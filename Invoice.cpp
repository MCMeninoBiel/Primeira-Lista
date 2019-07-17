#include "FaturaItem.h"


FaturaItem::FaturaItem(int numero, std::string descricao, int quantidade, int preco)
{
        this -> numero = numero;
        this -> descricao = descricao;
        this -> quantidade = quantidade;
        this -> preco = preco;
}

FaturaItem::FaturaItem()
{
    //ctor
}

FaturaItem::~FaturaItem()
{
    //dtor
}

int FaturaItem::getNumero()
{
    return numero;
