#ifndef INTERFACECADASTROCLIENTES_H
#define INTERFACECADASTROCLIENTES_H
#include<ListaClientes.h>
#include<Fornecedor.h>

class InterfaceCadastroClientes
{
    public:

        InterfaceCadastroClientes();
        virtual ~InterfaceCadastroClientes();

        void executarCliente();
    protected:
    private:
        ListaClientes* listaClientes;
        int obterOpcaoCliente();
        void incluirCliente();
        void alterarCliente();
        void excluirCliente();
        void listarClientes();

};

#endif // INTERFACECADASTROCLIENTES_H
