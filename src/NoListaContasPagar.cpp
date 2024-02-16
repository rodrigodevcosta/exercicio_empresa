#include "NoListaContasPagar.h"

NoListaContasPagar::NoListaContasPagar()
{
    contasPagar = NULL;
    proximoNo = NULL;
}

NoListaContasPagar::~NoListaContasPagar()
{
}

ContasPagar* NoListaContasPagar::obterContasPagar()
{
    return this->contasPagar;
}

NoListaContasPagar* NoListaContasPagar::obterProximoNo()
{
   return this->proximoNo;
}

void NoListaContasPagar::atualizarContasPagar(ContasPagar* contasPagar)
{
    this->contasPagar = contasPagar;
}

void NoListaContasPagar::atualizarProximoNo(NoListaContasPagar* proximoNo)
{
    this->proximoNo = proximoNo;
}
