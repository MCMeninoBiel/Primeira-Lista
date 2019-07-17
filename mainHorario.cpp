#include <iostream>
#include "Horario.h"

int main()
{
    Horario *horario = new Horario();
    Horario *horarioInvalido = new Horario();
    Horario *horarioM = new Horario();
    Horario *horarioH = new Horario();
    Horario *horarioD = new Horario();

    horario->setH(2);
    horario->setM(53);
    horario->setS(24);

    horarioInvalido->setH(3);
    horarioInvalido->setM(70);
    horarioInvalido->setS(-2);

    horarioM->setH(10);
    horarioM->setM(52);
    horarioM->setS(59);

    horarioH->setH(7);
    horarioH->setM(59);
    horarioH->setS(59);

    horarioD->setH(23);
    horarioD->setM(59);
    horarioD->setS(59);

    std::cout << horario->getHora()<<":"<<horario->getMinuto()<<":"<< horario->getSegundo()<< std::endl;
    horario->AvancarHorario(horario->getHora(),horario->getMinuto(),horario->getSegundo());
    std::cout << horario->getHora()<<":"<<horario->getMinuto()<<":"<< horario->getSegundo()<< std::endl;

    std::cout << horarioInvalido->getHora()<<":"<<horarioInvalido->getMinuto()<<":"<< horarioInvalido->getSegundo()<< std::endl;
    horarioInvalido->AvancarHorario(horarioInvalido->getHora(),horarioInvalido->getMinuto(),horarioInvalido->getSegundo());
    std::cout << horarioInvalido->getHora()<<":"<<horarioInvalido->getMinuto()<<":"<< horarioInvalido->getSegundo()<< std::endl;

    std::cout << horarioM->getHora()<<":"<<horarioM->getMinuto()<<":"<< horarioM->getSegundo()<< std::endl;
    horarioM->AvancarHorario(horarioM->getHora(),horarioM->getMinuto(),horarioM->getSegundo());
    std::cout << horarioM->getHora()<<":"<<horarioM->getMinuto()<<":"<< horarioM->getSegundo()<< std::endl;

    std::cout << horarioH->getHora()<<":"<<horarioH->getMinuto()<<":"<< horarioH->getSegundo()<< std::endl;
    horarioH->AvancarHorario(horarioH->getHora(),horarioH->getMinuto(),horarioH->getSegundo());
    std::cout << horarioH->getHora()<<":"<<horarioH->getMinuto()<<":"<< horarioH->getSegundo()<< std::endl;

    std::cout << horarioD->getHora()<<":"<<horarioD->getMinuto()<<":"<< horarioD->getSegundo()<< std::endl;
    horarioD->AvancarHorario(horarioD->getHora(),horarioD->getMinuto(),horarioD->getSegundo());
    std::cout << horarioD->getHora()<<":"<<horarioD->getMinuto()<<":"<< horarioD->getSegundo()<< std::endl;


    return 0;
}
