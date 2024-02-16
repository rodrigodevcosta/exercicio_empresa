#include "NoListaFornecedor.h"

NoListaFornecedor::NoListaFornecedor()
{
    fornecedor = NULL;
    proximoNo = NULL;
}

NoListaFornecedor::~NoListaFornecedor()
{
}

Fornecedor* NoListaFornecedor::obterFornecedor()
{
    return this->fornecedor;
}

NoListaFornecedor* NoListaFornecedor::obterProximoNo()
{
   return this->proximoNo;
}

void NoListaFornecedor::atualizarFornecedor(Fornecedor* fornecedor)
{
    this-> fornecedor = fornecedor;
}

void NoListaFornecedor::atualizarProximoNo(NoListaFornecedor* proximoNo)
{
    this->proximoNo = proximoNo;
}
