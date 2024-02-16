#ifndef LISTAFORNECEDORES_H
#define LISTAFORNECEDORES_H
#include<NoListaFornecedor.h>
#include<string>
using namespace std;


class ListaFornecedores
{
    public:
        ListaFornecedores();
        virtual ~ListaFornecedores();

        bool listaVazia();
        void incluir(Fornecedor* fornecedor);
        Fornecedor* localizarNome(string nome);
        Fornecedor* localizarEmail(string email);
        Fornecedor* localizarTelefone(string telefone);
        Fornecedor* localizarCnpj(string cnpj);
        Fornecedor* excluir(string nome);
        void limpar();
        void irParaPrimeiro();
        Fornecedor* obterProximo();
    protected:

    private:

        int quantidadeElementos;
        NoListaFornecedor* cabeca;
        NoListaFornecedor* cauda;
        NoListaFornecedor* noAnterior;
};

#endif // LISTAFORNECEDORES_H
