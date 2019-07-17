#ifndef PESSOA_H
#define PESSOA_H
#include <string>


class Pessoa
{
    public:

        Pessoa(std::string telefone, int idade, std::string nome);
        Pessoa();
        virtual ~Pessoa();

        std::string getTel();
        int getId();
        std::string getNom();

        void setTel(std::string telefone);
        void setId(int idade);
        void setNom(std::string nome);

    protected:

    private:
        std::string telefone;
        int idade;
        std::string nome;
};

#endif // PESSOA_H
