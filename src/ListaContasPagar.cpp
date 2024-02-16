#include "ListaContasPagar.h"
#include<ContasPagar.h>

ListaContasPagar::ListaContasPagar()
{
    cabeca= new NoListaContasPagar();
    cauda= cabeca;
    noAnterior = cabeca;
    quantidadeElementos =0;

}

ListaContasPagar::~ListaContasPagar()
{   limpar();
    delete cabeca;

}

bool ListaContasPagar::listaVazia()
{
    return (cabeca == cauda);
}

void ListaContasPagar::incluir(ContasPagar* contasPagar)
{
    NoListaContasPagar* novoNo = new NoListaContasPagar();
    novoNo->atualizarContasPagar(contasPagar);
    cauda->atualizarProximoNo(novoNo);
    cauda=novoNo;
    quantidadeElementos++;
}

ContasPagar* ListaContasPagar::localizarDescricao(string descricao)
{
    ContasPagar* contasPagarLocalizado = NULL;
    NoListaContasPagar* noBusca= cabeca->obterProximoNo();

    while(noBusca != NULL){
        ContasPagar* contasPagar =noBusca->obterContasPagar();
        if(contasPagar->obterDescricao() == descricao){
            contasPagarLocalizado = contasPagar;
            break;
        }
        noBusca=noBusca->obterProximoNo();
    }
    return contasPagarLocalizado;
}

ContasPagar* ListaContasPagar::localizarDataVencimento(string dataVencimento)
{
    ContasPagar* contasPagarLocalizado = NULL;
    NoListaContasPagar* noBusca= cabeca->obterProximoNo();

    while(noBusca != NULL){
        ContasPagar* contasPagar =noBusca->obterContasPagar();
        if(contasPagar->obterDataVencimento()== dataVencimento){
            contasPagarLocalizado = contasPagar;
            break;
        }
        noBusca=noBusca->obterProximoNo();
    }
    return contasPagarLocalizado;
}

ContasPagar* ListaContasPagar::localizarFornecedor(string fornecedor)
{
    ContasPagar* contasPagarLocalizado = NULL;
    NoListaContasPagar* noBusca= cabeca->obterProximoNo();

    while(noBusca != NULL){
        ContasPagar* contasPagar =noBusca->obterContasPagar();
        if(contasPagar->obterFornecedor() == fornecedor){
            contasPagarLocalizado = contasPagar;
            break;
        }
        noBusca=noBusca->obterProximoNo();
    }
    return contasPagarLocalizado;
}

ContasPagar* ListaContasPagar::localizarValor(float valor)
{
    ContasPagar* contasPagarLocalizado = NULL;
    NoListaContasPagar* noBusca= cabeca->obterProximoNo();

    while(noBusca != NULL){
        ContasPagar* contasPagar =noBusca->obterContasPagar();
        if(contasPagar->obterValor()== valor){
            contasPagarLocalizado = contasPagar;
            break;
        }
        noBusca=noBusca->obterProximoNo();
    }
    return contasPagarLocalizado;
}

ContasPagar* ListaContasPagar::localizarDataPagamento(string dataPagamento)
{
    ContasPagar* contasPagarLocalizado = NULL;
    NoListaContasPagar* noBusca= cabeca->obterProximoNo();

    while(noBusca != NULL){
        ContasPagar* contasPagar =noBusca->obterContasPagar();
        if(contasPagar->obterDataPagamento()== dataPagamento){
            contasPagarLocalizado = contasPagar;
            break;
        }
        noBusca=noBusca->obterProximoNo();
    }
    return contasPagarLocalizado;
}
ContasPagar* ListaContasPagar::localizarValorPago(float valorPago)
{
    ContasPagar* contasPagarLocalizado = NULL;
    NoListaContasPagar* noBusca= cabeca->obterProximoNo();

    while(noBusca != NULL){
        ContasPagar* contasPagar =noBusca->obterContasPagar();
        if(contasPagar->obterValorPago()== valorPago){
            contasPagarLocalizado = contasPagar;
            break;
        }
        noBusca=noBusca->obterProximoNo();
    }
    return contasPagarLocalizado;
}

ContasPagar* ListaContasPagar::excluir(string fornecedor)
{
    ContasPagar* contasPagarLocalizado = NULL;
    NoListaContasPagar* noBusca = cabeca;

    while(noBusca->obterProximoNo()!=NULL){
        NoListaContasPagar*noExclusao = noBusca->obterProximoNo();
        ContasPagar* contasPagar = noExclusao->obterContasPagar();
        if(contasPagar->obterFornecedor() == fornecedor){
            contasPagarLocalizado = contasPagar;
            noBusca->atualizarProximoNo(noExclusao->obterProximoNo());
            delete noExclusao;
            quantidadeElementos--;
            break;
        }
        noBusca = noBusca->obterProximoNo();
    }
    return contasPagarLocalizado;
}

void ListaContasPagar::limpar()
{
    NoListaContasPagar* noExclusao = cabeca->obterProximoNo();

    while(noExclusao !=NULL){
        NoListaContasPagar* noAuxiliar = noExclusao->obterProximoNo();
        ContasPagar* contasPagar = noExclusao->obterContasPagar();
        delete contasPagar;
        delete noExclusao;
        noExclusao = noAuxiliar;
    }
    quantidadeElementos = 0;
    cauda=cabeca;
}


void ListaContasPagar::irParaPrimeiro()
{
    noAnterior = cabeca;
}

ContasPagar* ListaContasPagar::obterProximo()
{
    ContasPagar* contasPagar = NULL;
    if(noAnterior->obterProximoNo()!= NULL){
        contasPagar = noAnterior->obterProximoNo()->obterContasPagar();
        noAnterior=noAnterior->obterProximoNo();
    }
    return contasPagar;
}


