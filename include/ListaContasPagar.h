#ifndef LISTACONTASPAGAR_H
#define LISTACONTASPAGAR_H
#include<NoListaContasPagar.h>
#include<string>
using namespace std;


class ListaContasPagar
{
    public:
        ListaContasPagar();
        virtual ~ListaContasPagar();

        bool listaVazia();
        void incluir(ContasPagar* contasPagar);
        ContasPagar* localizarDescricao(string descricao);
        ContasPagar* localizarDataVencimento(string dataVencimento);
        ContasPagar* localizarFornecedor(string fornecedor);
        ContasPagar* localizarValor(float valor);
        ContasPagar* localizarDataPagamento(string dataPagamento);
        ContasPagar* localizarValorPago(float valorPago);
        ContasPagar* excluir(string fornecedor);
        void limpar();
        void irParaPrimeiro();
        ContasPagar* obterProximo();
    protected:

    private:

        int quantidadeElementos;
        NoListaContasPagar* cabeca;
        NoListaContasPagar* cauda;
        NoListaContasPagar* noAnterior;
};

#endif // LISTACONTASPAGAR_H
