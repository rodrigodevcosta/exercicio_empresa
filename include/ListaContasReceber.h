#ifndef LISTACONTASRECEBER_H
#define LISTACONTASRECEBER_H
#include<NoListaContasReceber.h>
#include<string>
using namespace std;



class ListaContasReceber
{
    public:
        ListaContasReceber();
        virtual ~ListaContasReceber();
        bool listaVazia();
        void incluir(ContasReceber* contasReceber);
        ContasReceber* localizarDescricao(string descricao);
        ContasReceber* localizarDataVencimento(string dataVencimento);
        ContasReceber* localizarCliente(string cliente);
        ContasReceber* localizarValor(float valor);
        ContasReceber* localizarDataRecebimento(string dataRecebimento);
        ContasReceber* localizarValorRecebido(float valorRecebido);
        ContasReceber* excluir(string cliente);
        void limpar();
        void irParaPrimeiro();
        ContasReceber* obterProximo();
    protected:

    private:

        int quantidadeElementos;
        NoListaContasReceber* cabeca;
        NoListaContasReceber* cauda;
        NoListaContasReceber* noAnterior;
};

#endif // LISTACONTASRECEBER_H
