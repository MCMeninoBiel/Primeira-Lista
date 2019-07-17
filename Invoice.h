#ifndef FATURAITEM_H
#define FATURAITEM_H
#include <iostream>
#include <string>


class FaturaItem
{
    public:
        FaturaItem();
        FaturaItem(int numero, std::string descricao, int quantidade, int preco);
        virtual ~FaturaItem();

        int getNumero();
        std::string getDescricao();
        int getQuantidade();
        int getPreco();

        void setNumero(int numero);
        void setDescricao(std::string descricao);
        void setQuantidade(int quantidade);
        void setPreco(int preco);

        double calculaMontante(int quantidade, int preco);


    protected:

        int numero;
        std::string descricao;
        int quantidade;
        int preco;

    private:
};

#endif // FATURAITEM_H
