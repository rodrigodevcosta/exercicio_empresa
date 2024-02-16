#include "ContasReceber.h"

ContasReceber::ContasReceber()
{
    valorRecebido = 0;
    cliente = " ";
    dataRecebimento = "Nenhum recebimento";

}

ContasReceber::~ContasReceber()
{
    //dtor
}

void ContasReceber::atualizarCliente(string cliente)
{
    this -> cliente = cliente;
}
string ContasReceber::obterCliente()
{
    return cliente;
}
void ContasReceber::atualizarDataRecebimento(string dataRecebimento)
{
    this -> dataRecebimento = dataRecebimento;
}

string ContasReceber::obterDataRecebimento()
{
    return dataRecebimento;
}
void ContasReceber::atualizarValorRecebido(float valorRecebido)
{
    this -> valorRecebido = valorRecebido;
}
float ContasReceber::obterValorRecebido()
{
    return valorRecebido;
}


