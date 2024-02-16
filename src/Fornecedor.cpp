#include "Fornecedor.h"

Fornecedor::Fornecedor()
{
    cnpj = " ";
}

Fornecedor::~Fornecedor()
{
    //dtor
}

void Fornecedor::atualizarCnpj(string cnpj)
{
    this -> cnpj = cnpj;
}

string Fornecedor::obterCnpj()
{
    return cnpj;
}
