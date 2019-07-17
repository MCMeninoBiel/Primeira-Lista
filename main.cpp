{
    Data *data1 = new Data();
    Data *data2 = new Data();
    Data *data3 = new Data();
    Data *data4 = new Data();
    /* Uma data inválida, uma data anterior
    uma data correta, uma posterior*/

    data1->setDia(32);
    data1->setMes(12);
    data1->setAno(2000);

    data2->setDia(6);
    data2->setMes(3);
    data2->setAno(2000);

    data3->setDia(16);
    data3->setMes(7);
    data3->setAno(2019);

    data4->setDia(10);
    data4->setMes(2);
    data4->setAno(2020);

    /*std::cout << "Data1: " << data1->getDia()<< " de "
    << data1->getMesExtenso(data1->getMes())<<" de "
    <<data1->getAno()<<"\t" << data1->Compara(data1->getDia(), data1->getMes(), data1->getAno())
    << std::endl;
    */

    std::cout << "Data2: " << data2->getDia()<< " de "
    << data2->getMesExtenso(data2->getMes())<<" de "
    <<data2->getAno()<<"\t" << data2->Compara(data2->getDia(), data2->getMes(), data2->getAno())
    <<"\t"<< data2->isBissexto(data2->getAno())<< std::endl;

    std::cout << "Data3: " << data3->getDia()<< " de "
    << data3->getMesExtenso(data3->getMes())<<" de "
    <<data3->getAno()<<"\t" << data3->Compara(data3->getDia(), data3->getMes(), data3->getAno())
    <<"\t"<< data3->isBissexto(data3->getAno())<< std::endl;


    std::cout << "Data4: " << data4->getDia()<< " de "
    << data4->getMesExtenso(data4->getMes())<<" de "
    <<data4->getAno()<<"\t" << data4->Compara(data4->getDia(), data4->getMes(), data4->getAno())
    <<"\t"<< data4->isBissexto(data4->getAno())<< std::endl;

    return 0;
}
