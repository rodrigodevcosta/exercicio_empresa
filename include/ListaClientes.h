#ifndef LISTACLIENTES_H
#define LISTACLIENTES_H
#include<NoListaClientes.h>
#include<string>
using namespace std;

class ListaClientes
{
    public:
        ListaClientes();
        virtual ~ListaClientes();

        bool listaVazia();
        void incluir(Clientes* cliente);
        Clientes* localizarNome(string nome);
        Clientes* localizarEmail(string email);
        Clientes* localizarTelefone(string telefone);
        Clientes* localizarCpf(string cpf);
        Clientes* excluir(string nome);
        void limpar();
        void irParaPrimeiro();
        Clientes* obterProximo();
    protected:

    private:
        int quantidadeElementos;
        NoListaClientes* cabeca;
        NoListaClientes* cauda;
        NoListaClientes* noAnterior;
};

#endif // LISTACLIENTES_H
