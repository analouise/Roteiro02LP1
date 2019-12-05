#ifndef INVOICE_H
#define INVOICE_H
#include <string>


class Invoice
{
    public:
        Invoice();
        Invoice(int numero, int quantidade, double preco, std::string descricao);

        int getNumero();
        int getQuantidade();
        double getPreco();
        std::string getDescricao();

        void setNumero(int numero);
        void setQuantidade(int quantidade);
        void setPreco(double preco);
        void setDescricao(std::string descricao);

        double getInvoiceAmount();

        virtual ~Invoice();

    private:

    int numero;
    int quantidade;
    double preco;
    std::string descricao;
};

#endif // INVOICE_H
© 2019 GitHub, Inc.
