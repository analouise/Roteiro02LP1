#include "Pessoa.h"

Pessoa::Pessoa()
{
    nome = "";
    idade = 1;
    telefone = "(00)0000-0000";
}

Pessoa::Pessoa(std::string nome, int idade, std::string telefone)
{
    setNome(nome);
    setIdade(idade);
    setTelefone(telefone);
}

Pessoa::Pessoa(std::string nome)
{
    setNome(nome);
    idade = 1;
    telefone = "(00)0000-0000";

}

Pessoa::Pessoa(int idade, std::string telefone)
{
    nome = "";
    setIdade(idade);
    setTelefone(telefone);

}

std::string Pessoa::getNome(){
    return nome;
}

int Pessoa::getIdade(){
    return idade;
}

std::string Pessoa::getTelefone(){
    return telefone;
}

void Pessoa::setNome(std::string nome){
    this->nome = nome;
}

void Pessoa::setIdade(int idade){
    this->idade = idade;
}

void Pessoa::setTelefone(std::string telefone){
    this->telefone = telefone;

}

Pessoa::~Pessoa()
{
    //dtor
}
