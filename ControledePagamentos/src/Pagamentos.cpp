#include "Pagamentos.h"

Pagamentos::Pagamentos()
{
    nomeDoFuncionario = "";
    valorPagamento = 0;
}

Pagamentos::Pagamentos(std::string nomeDoFuncionario, double valorPagamento)
{
    setNomeDoFuncionario(nomeDoFuncionario);
    setValorPagamento(valorPagamento);
}

std::string Pagamentos::getnomeDoFuncionario(){
    return nomeDoFuncionario;
}
double Pagamentos::getvalorPagamento(){
    return valorPagamento;
}

void Pagamentos::setNomeDoFuncionario(std::string nomeDoFuncionario){
    this->nomeDoFuncionario = nomeDoFuncionario;
}
void Pagamentos::setValorPagamento(double valorPagamento){
    this->valorPagamento  = valorPagamento;
}


Pagamentos::~Pagamentos()
{
    //dtor
}
