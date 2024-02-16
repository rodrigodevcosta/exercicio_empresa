#include "NoListaContasReceber.h"

NoListaContasReceber::NoListaContasReceber()
{
    contasReceber = NULL;
    proximoNo = NULL;
}

NoListaContasReceber::~NoListaContasReceber()
{
}

ContasReceber* NoListaContasReceber::obterContasReceber()
{
    return this->contasReceber;
}

NoListaContasReceber* NoListaContasReceber::obterProximoNo()
{
   return this->proximoNo;
}

void NoListaContasReceber::atualizarContasReceber(ContasReceber* contasReceber)
{
    this->contasReceber = contasReceber;
}

void NoListaContasReceber::atualizarProximoNo(NoListaContasReceber* proximoNo)
{
    this->proximoNo = proximoNo;
}
