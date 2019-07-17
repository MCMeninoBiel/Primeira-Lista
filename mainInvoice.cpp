#include <iostream>
#include "FaturaItem.h"

int main()
{
    FaturaItem *compra1 = new FaturaItem();


    compra1->setPreco(80);
    compra1->setQuantidade(3);

    std::cout<< "foram comprados " << compra1 -> getQuantidade()<< " itens a " << compra1->getPreco();
    std::cout<<" R$\nmontante = "<<compra1->calculaMontante(compra1->getQuantidade(), compra1->getPreco())<< std::endl;

    return 0;
}
