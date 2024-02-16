#include "Clientes.h"

Clientes::Clientes()
{
    //ctor
}

Clientes::~Clientes()
{
    //dtor
}
void Clientes::atualizarCpf(string cpf)
{
    this -> cpf = cpf;
}
string Clientes::obterCpf()
{
    return  cpf;
}
