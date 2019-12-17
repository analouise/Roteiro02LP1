#ifndef PAGAMENTOS_H
#define PAGAMENTOS_H


class Pagamentos
{
    public:
        Pagamentos();
        Pagamentos(std::string nomeDoFuncionario, double valorPagamento);
        virtual ~Pagamentos();

        std::string getnomeDeFuncionario();
        double getvalorPagamento();

        void setNomeDoFuncionario(std::string nomeDoFuncionario);
        void setValorPagamento(double valorPagamento);

    protected:

    private:
    std::string nomeDoFuncionario;
    double valorPagamento;
};

#endif // PAGAMENTOS_H
