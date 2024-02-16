#include "ListaFornecedores.h"
#include<Clientes.h>

ListaFornecedores::ListaFornecedores()
{
    cabeca= new NoListaFornecedor();
    cauda= cabeca;
    noAnterior = cabeca;
    quantidadeElementos =0;

}

ListaFornecedores::~ListaFornecedores()
{   limpar();
    delete cabeca;

}

bool ListaFornecedores::listaVazia()
{
    return (cabeca==cauda);
}

void ListaFornecedores::incluir(Fornecedor* fornecedor)
{
    NoListaFornecedor* novoNo = new NoListaFornecedor();
    novoNo->atualizarFornecedor(fornecedor);
    cauda->atualizarProximoNo(novoNo);
    cauda=novoNo;
    quantidadeElementos++;
}

Fornecedor* ListaFornecedores::localizarNome(string nome)
{
    Fornecedor* fornecedorLocalizado = NULL;
    NoListaFornecedor* noBusca= cabeca->obterProximoNo();

    while(noBusca != NULL){
        Fornecedor* fornecedor =noBusca->obterFornecedor();
        if(fornecedor->obterNome()== nome){
            fornecedorLocalizado=fornecedor;
            break;
        }
        noBusca=noBusca->obterProximoNo();
    }
    return fornecedorLocalizado;
}

Fornecedor* ListaFornecedores::localizarEmail(string email)
{
    Fornecedor* fornecedorLocalizado = NULL;
    NoListaFornecedor* noBusca= cabeca->obterProximoNo();

    while(noBusca != NULL){
        Fornecedor* fornecedor =noBusca->obterFornecedor();
        if(fornecedor->obterEmail()== email){
            fornecedorLocalizado = fornecedor;
            break;
        }
        noBusca=noBusca->obterProximoNo();
    }
    return fornecedorLocalizado;
}

Fornecedor* ListaFornecedores::localizarTelefone(string telefone)
{
    Fornecedor* fornecedorLocalizado = NULL;
    NoListaFornecedor* noBusca= cabeca->obterProximoNo();

    while(noBusca != NULL){
        Fornecedor* fornecedor =noBusca->obterFornecedor();
        if(fornecedor->obterTelefone()== telefone){
            fornecedorLocalizado = fornecedor;
            break;
        }
        noBusca=noBusca->obterProximoNo();
    }
    return fornecedorLocalizado;
}

Fornecedor* ListaFornecedores::localizarCnpj(string cnpj)
{
    Fornecedor* fornecedorLocalizado = NULL;
    NoListaFornecedor* noBusca= cabeca->obterProximoNo();

    while(noBusca != NULL){
        Fornecedor* fornecedor =noBusca->obterFornecedor();
        if(fornecedor->obterCnpj()== cnpj){
            fornecedorLocalizado = fornecedor;
            break;
        }
        noBusca=noBusca->obterProximoNo();
    }
    return fornecedorLocalizado;
}

Fornecedor* ListaFornecedores::excluir(string nome)
{
    Fornecedor* fornecedorLocalizado = NULL;
    NoListaFornecedor* noBusca = cabeca;

    while(noBusca->obterProximoNo()!=NULL){
        NoListaFornecedor*noExclusao = noBusca->obterProximoNo();
        Fornecedor* fornecedor = noExclusao->obterFornecedor();
        if(fornecedor->obterNome()==nome){
            fornecedorLocalizado = fornecedor;
            noBusca->atualizarProximoNo(noExclusao->obterProximoNo());
            delete noExclusao;
            quantidadeElementos--;
            break;
        }
        noBusca = noBusca->obterProximoNo();
    }
    return fornecedorLocalizado;
}

void ListaFornecedores::limpar()
{
    NoListaFornecedor* noExclusao = cabeca->obterProximoNo();

    while(noExclusao !=NULL){
        NoListaFornecedor* noAuxiliar = noExclusao->obterProximoNo();
        Fornecedor* fornecedor = noExclusao->obterFornecedor();
        delete fornecedor;
        delete noExclusao;
        noExclusao = noAuxiliar;
    }
    quantidadeElementos = 0;
    cauda=cabeca;
}

void ListaFornecedores::irParaPrimeiro()
{
    noAnterior = cabeca;
}

Fornecedor* ListaFornecedores::obterProximo()
{
    Fornecedor* fornecedor = NULL;
    if(noAnterior->obterProximoNo()!= NULL){
        fornecedor = noAnterior->obterProximoNo()->obterFornecedor();
        noAnterior=noAnterior->obterProximoNo();
    }
    return fornecedor;
}


