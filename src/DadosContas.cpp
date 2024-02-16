#include "DadosContas.h"

DadosContas::DadosContas()
{
    valor  = 0;
    descricao = " ";
    dataVencimento = " ";
}

DadosContas::~DadosContas()
{
    //dtor
}

void DadosContas::atualizarDescricao(string descricao)
{
    this -> descricao = descricao;
}
string DadosContas::obterDescricao()
{
    return descricao;
}

void DadosContas::atualizarDataVencimento(string dataVencimento)
{
    this -> dataVencimento = dataVencimento;
}
string DadosContas::obterDataVencimento()
{
    return dataVencimento;
}

void DadosContas::atualizarValor(float valor)
{
    this -> valor = valor;
}

float DadosContas::obterValor()
{
    return valor;
}

