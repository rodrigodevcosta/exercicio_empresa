#include "ListaContasReceber.h"
#include<ContasReceber.h>

ListaContasReceber::ListaContasReceber()
{
    cabeca= new NoListaContasReceber();
    cauda= cabeca;
    noAnterior = cabeca;
    quantidadeElementos =0;

}

ListaContasReceber::~ListaContasReceber()
{   limpar();
    delete cabeca;

}

bool ListaContasReceber::listaVazia()
{
    return (cabeca == cauda);
}

void ListaContasReceber::incluir(ContasReceber* contasReceber)
{
    NoListaContasReceber* novoNo = new NoListaContasReceber();
    novoNo->atualizarContasReceber(contasReceber);
    cauda->atualizarProximoNo(novoNo);
    cauda=novoNo;
    quantidadeElementos++;
}

ContasReceber* ListaContasReceber::localizarDescricao(string descricao)
{
    ContasReceber* contasReceberLocalizado = NULL;
    NoListaContasReceber* noBusca= cabeca->obterProximoNo();

    while(noBusca != NULL){
        ContasReceber* contasReceber =noBusca->obterContasReceber();
        if(contasReceber->obterDescricao() == descricao){
            contasReceberLocalizado = contasReceber;
            break;
        }
        noBusca=noBusca->obterProximoNo();
    }
    return contasReceberLocalizado;
}

ContasReceber* ListaContasReceber::localizarDataVencimento(string dataVencimento)
{
    ContasReceber* contasReceberLocalizado = NULL;
    NoListaContasReceber* noBusca= cabeca->obterProximoNo();

    while(noBusca != NULL){
        ContasReceber* contasReceber =noBusca->obterContasReceber();
        if(contasReceber->obterDataVencimento()== dataVencimento){
            contasReceberLocalizado = contasReceber;
            break;
        }
        noBusca=noBusca->obterProximoNo();
    }
    return contasReceberLocalizado;
}

ContasReceber* ListaContasReceber::localizarCliente(string cliente)
{
    ContasReceber* contasReceberLocalizado = NULL;
    NoListaContasReceber* noBusca= cabeca->obterProximoNo();

    while(noBusca != NULL){
        ContasReceber* contasReceber =noBusca->obterContasReceber();
        if(contasReceber->obterCliente() == cliente){
            contasReceberLocalizado = contasReceber;
            break;
        }
        noBusca=noBusca->obterProximoNo();
    }
    return contasReceberLocalizado;
}

ContasReceber* ListaContasReceber::localizarValor(float valor)
{
    ContasReceber* contasReceberLocalizado = NULL;
    NoListaContasReceber* noBusca= cabeca->obterProximoNo();

    while(noBusca != NULL){
        ContasReceber* contasReceber =noBusca->obterContasReceber();
        if(contasReceber->obterValor()== valor){
            contasReceberLocalizado = contasReceber;
            break;
        }
        noBusca=noBusca->obterProximoNo();
    }
    return contasReceberLocalizado;
}

ContasReceber* ListaContasReceber::localizarDataRecebimento(string dataRecebimento)
{
    ContasReceber* contasReceberLocalizado = NULL;
    NoListaContasReceber* noBusca= cabeca->obterProximoNo();

    while(noBusca != NULL){
        ContasReceber* contasReceber =noBusca->obterContasReceber();
        if(contasReceber->obterDataRecebimento()== dataRecebimento){
            contasReceberLocalizado = contasReceber;
            break;
        }
        noBusca=noBusca->obterProximoNo();
    }
    return contasReceberLocalizado;
}

ContasReceber* ListaContasReceber::localizarValorRecebido(float valorRecebido)
{
    ContasReceber* contasReceberLocalizado = NULL;
    NoListaContasReceber* noBusca= cabeca->obterProximoNo();

    while(noBusca != NULL){
        ContasReceber* contasReceber =noBusca->obterContasReceber();
        if(contasReceber->obterValorRecebido()== valorRecebido){
            contasReceberLocalizado = contasReceber;
            break;
        }
        noBusca=noBusca->obterProximoNo();
    }
    return contasReceberLocalizado;
}

ContasReceber* ListaContasReceber::excluir(string cliente)
{
    ContasReceber* contasReceberLocalizado = NULL;
    NoListaContasReceber* noBusca = cabeca;

    while(noBusca->obterProximoNo()!=NULL){
        NoListaContasReceber* noExclusao = noBusca->obterProximoNo();
        ContasReceber* contasReceber = noExclusao->obterContasReceber();
        if(contasReceber->obterCliente() == cliente){
            contasReceberLocalizado = contasReceber;
            noBusca->atualizarProximoNo(noExclusao->obterProximoNo());
            delete noExclusao;
            quantidadeElementos--;
            break;
        }
        noBusca = noBusca->obterProximoNo();
    }
    return contasReceberLocalizado;
}

void ListaContasReceber::limpar()
{
    NoListaContasReceber* noExclusao = cabeca->obterProximoNo();

    while(noExclusao !=NULL){
        NoListaContasReceber* noAuxiliar = noExclusao->obterProximoNo();
        ContasReceber* contasReceber = noExclusao->obterContasReceber();
        delete contasReceber;
        delete noExclusao;
        noExclusao = noAuxiliar;
    }
    quantidadeElementos = 0;
    cauda=cabeca;
}


void ListaContasReceber::irParaPrimeiro()
{
    noAnterior = cabeca;
}

ContasReceber* ListaContasReceber::obterProximo()
{
    ContasReceber* contasReceber = NULL;
    if(noAnterior->obterProximoNo()!= NULL){
        contasReceber = noAnterior->obterProximoNo()->obterContasReceber();
        noAnterior=noAnterior->obterProximoNo();
    }
    return contasReceber;
}


