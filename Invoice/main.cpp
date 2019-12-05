#include <iostream>
#include "Invoice.h"

using namespace std;

int main()
{
    Invoice produto1 = Invoice(1,4,5,"bolacha");

    cout<<"Numero: " <<produto1.getNumero()<<"\nQuantidade: "<<produto1.getQuantidade() <<"\nPreco: "<< produto1.getPreco() << "\nDescrição: "<<produto1.getDescricao()<<endl;

    printf("Fatura: %.2lf",produto1.getInvoiceAmount()) ;



    return 0;
}
