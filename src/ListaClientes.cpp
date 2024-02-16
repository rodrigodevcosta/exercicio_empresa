#include "ListaClientes.h"
#include<Clientes.h>

ListaClientes::ListaClientes()
{
    cabeca= new NoListaClientes();
    cauda= cabeca;
    noAnterior = cabeca;
    quantidadeElementos =0;

}

ListaClientes::~ListaClientes()
{   limpar();
    delete cabeca;

}

bool ListaClientes::listaVazia()
{
    return (cabeca==cauda);
}

void ListaClientes::incluir(Clientes* cliente)
{
    NoListaClientes* novoNo = new NoListaClientes();
    novoNo->atualizarCliente(cliente);
    cauda->atualizarProximoNo(novoNo);
    cauda=novoNo;
    quantidadeElementos++;
}

Clientes* ListaClientes::localizarNome(string nome)
{
    Clientes* clienteLocalizado = NULL;
    NoListaClientes* noBusca= cabeca->obterProximoNo();

    while(noBusca != NULL){
        Clientes* cliente =noBusca->obterCliente();
        if(cliente->obterNome()== nome){
            clienteLocalizado=cliente;
            break;
        }
        noBusca=noBusca->obterProximoNo();
    }
    return clienteLocalizado;
}

Clientes* ListaClientes::localizarEmail(string email)
{
    Clientes* clienteLocalizado = NULL;
    NoListaClientes* noBusca= cabeca->obterProximoNo();

    while(noBusca != NULL){
        Clientes* cliente =noBusca->obterCliente();
        if(cliente->obterEmail()== email){
            clienteLocalizado = cliente;
            break;
        }
        noBusca=noBusca->obterProximoNo();
    }
    return clienteLocalizado;
}

Clientes* ListaClientes::localizarTelefone(string telefone)
{
    Clientes* clienteLocalizado = NULL;
    NoListaClientes* noBusca= cabeca->obterProximoNo();

    while(noBusca != NULL){
        Clientes* cliente =noBusca->obterCliente();
        if(cliente->obterTelefone()== telefone){
            clienteLocalizado=cliente;
            break;
        }
        noBusca=noBusca->obterProximoNo();
    }
    return clienteLocalizado;
}

Clientes* ListaClientes::localizarCpf(string cpf)
{
    Clientes* clienteLocalizado = NULL;
    NoListaClientes* noBusca= cabeca->obterProximoNo();

    while(noBusca != NULL){
        Clientes* cliente =noBusca->obterCliente();
        if(cliente->obterCpf()== cpf){
            clienteLocalizado = cliente;
            break;
        }
        noBusca=noBusca->obterProximoNo();
    }
    return clienteLocalizado;
}

Clientes* ListaClientes::excluir(string nome)
{
    Clientes* clienteLocalizado = NULL;
    NoListaClientes* noBusca = cabeca;

    while(noBusca->obterProximoNo()!=NULL){
        NoListaClientes*noExclusao = noBusca->obterProximoNo();
        Clientes* cliente = noExclusao->obterCliente();
        if(cliente->obterNome()==nome){
            clienteLocalizado = cliente;
            noBusca->atualizarProximoNo(noExclusao->obterProximoNo());
            delete noExclusao;
            quantidadeElementos--;
            break;
        }
        noBusca = noBusca->obterProximoNo();
    }
    return clienteLocalizado;
}

void ListaClientes::limpar()
{
    NoListaClientes* noExclusao = cabeca->obterProximoNo();

    while(noExclusao !=NULL){
        NoListaClientes* noAuxiliar = noExclusao->obterProximoNo();
        Clientes* cliente = noExclusao->obterCliente();
        delete cliente;
        delete noExclusao;
        noExclusao = noAuxiliar;
    }
    quantidadeElementos = 0;
    cauda=cabeca;
}

void ListaClientes::irParaPrimeiro()
{
    noAnterior = cabeca;
}

Clientes* ListaClientes::obterProximo()
{
    Clientes* cliente = NULL;
    if(noAnterior->obterProximoNo()!= NULL){
        cliente = noAnterior->obterProximoNo()->obterCliente();
        noAnterior=noAnterior->obterProximoNo();
    }
    return cliente;
}


