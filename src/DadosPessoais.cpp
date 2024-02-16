#include "DadosPessoais.h"

DadosPessoais::DadosPessoais()
{
    nome = " ";
    email = " ";
    telefone = " ";
}

DadosPessoais::~DadosPessoais()
{
    //dtor
}
string DadosPessoais::obterNome()
{
    return nome;
}

void DadosPessoais::atualizarNome(string nome)
{
    this -> nome = nome;
}

string DadosPessoais::obterEmail()
{
    return email;
}

void DadosPessoais::atualizarEmail(string email)
{
    this -> email = email;
}

string DadosPessoais::obterTelefone()
{
    return telefone;
}

void DadosPessoais::atualizarTelefone(string telefone)
{
    this -> telefone = telefone;
}

