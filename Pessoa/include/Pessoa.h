
#ifndef PESSOA_H
#define PESSOA_H
#include <string>

class Pessoa
{
    public:
        Pessoa();
        Pessoa(std::string nome);
        Pessoa(int idade, std::string telefone);
        Pessoa(std::string nome, int idade, std::string telefone);
        virtual ~Pessoa();

        std::string getNome();
        int getIdade();
        std::string getTelefone();

        void setNome(std::string nome);
        void setIdade(int idade);
        void setTelefone(std::string telefone);

    private:
        std::string nome;
        int idade;
        std::string telefone;

    };

#endif // PESSOA_H
