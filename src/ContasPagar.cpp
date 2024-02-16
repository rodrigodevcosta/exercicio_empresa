#include "ContasPagar.h"

ContasPagar::ContasPagar()
{
    valorPago=0;
    fornecedor=" ";
    dataPagamento="Nenhum pagamento";

}

ContasPagar::~ContasPagar()
{
    //dtor
}

void ContasPagar::atualizarFornecedor(string fornecedor)
{
    this -> fornecedor = fornecedor;
}
string ContasPagar::obterFornecedor()
{
    return fornecedor;
}
void ContasPagar::atualizarDataPagamento(string dataPagamento)
{
    this -> dataPagamento = dataPagamento;
}

string ContasPagar::obterDataPagamento()
{
    return dataPagamento;
}
void ContasPagar::atualizarValorPago(float valorPago)
{
    this -> valorPago = valorPago;
}
float ContasPagar::obterValorPago()
{
    return valorPago;
}


