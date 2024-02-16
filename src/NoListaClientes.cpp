#include "NoListaClientes.h"

NoListaClientes::NoListaClientes()
{
    cliente = NULL;
    proximoNo = NULL;
}

NoListaClientes::~NoListaClientes()
{
}

Clientes* NoListaClientes::obterCliente()
{
    return this->cliente;
}

NoListaClientes* NoListaClientes::obterProximoNo()
{
   return this->proximoNo;
}

void NoListaClientes::atualizarCliente(Clientes* cliente)
{
    this->cliente = cliente;
}

void NoListaClientes::atualizarProximoNo(NoListaClientes* proximoNo)
{
    this->proximoNo = proximoNo;
}
