#include <iostream>
#include "Pessoa.h"


int main()
{
    Pessoa *pessoa = new Pessoa();
    Pessoa *pessoa2 = new Pessoa();
    Pessoa pessoa1("8865377435", 16, "celso");

    pessoa->setTel("988471537");
    pessoa->setNom("Gabriel");
    pessoa->setId(19);

    pessoa2->setTel("987140556");
    pessoa2->setNom("Lucas");
    pessoa2->setId(20);

    std::cout << "Telefone = " << pessoa->getTel() << std::endl;
    std::cout << "Nome = " << pessoa->getNom() << std::endl;
    std::cout << "Idade = " << pessoa->getId() << std::endl;

    std::cout << "Telefone = " << pessoa2->getTel() << std::endl;
    std::cout << "Nome = " << pessoa2->getNom() << std::endl;
    std::cout << "Idade = " << pessoa2->getId() << std::endl;

    std::cout << "Telefone = " << pessoa1.getTel() << std::endl;
    std::cout << "Nome = " << pessoa1.getNom() << std::endl;
    std::cout << "Idade = " << pessoa1.getId() << std::endl;


    return 0;
}
