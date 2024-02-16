#ifndef INTERFACECADASTROFORNECEDORES_H
#define INTERFACECADASTROFORNECEDORES_H
#include<ListaFornecedores.h>
#include<Fornecedor.h>


class InterfaceCadastroFornecedores
{
    public:
        InterfaceCadastroFornecedores();
        virtual ~InterfaceCadastroFornecedores();

        void executarFornecedor();
    protected:
    private:
        ListaFornecedores* listaFornecedores;
        int obterOpcaoFornecedor();
        void incluirFornecedor();
        void alterarFornecedor();
        void excluirFornecedor();
        void listarFornecedores();
};

#endif // INTERFACECADASTROFORNECEDORES_H
