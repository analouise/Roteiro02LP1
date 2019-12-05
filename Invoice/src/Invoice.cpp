#include "Invoice.h"

Invoice::Invoice()
{
    numero = 0;
    quantidade = 0;
    preco = 0;
    descricao = "";
}

Invoice::Invoice(int numero, int quantidade, double preco, std::string descricao)
{
    setNumero(numero);
    setQuantidade(quantidade);
    setPreco(preco);
    setDescricao(descricao);
}


int Invoice::getNumero(){
    return numero;
}

int Invoice::getQuantidade(){
    return quantidade;
}

double Invoice::getPreco(){
    return preco;
}

std::string Invoice::getDescricao(){
    return descricao;
}

void Invoice::setNumero(int numero){
    this->numero = numero;
}

void Invoice::setQuantidade(int quantidade){
    this->quantidade = quantidade < 0 ? 0: quantidade;
}

void Invoice::setPreco(double preco){
    this->preco = preco < 0 ? 0 : preco;
}

void Invoice::setDescricao(std::string descricao){
    this->descricao = descricao;
}


double Invoice::getInvoiceAmount(){
    return preco * quantidade;
}
Invoice::~Invoice()
{
    //dtor
}
