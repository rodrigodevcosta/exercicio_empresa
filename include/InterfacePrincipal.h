#ifndef INTERFACEPRINCIPAL_H
#define INTERFACEPRINCIPAL_H
#include<InterfaceCadastroClientes.h>
#include<InterfaceCadastroFornecedores.h>
#include<InterfaceCadastroContasPagar.h>
#include<InterfaceCadastroContasReceber.h>


class InterfacePrincipal
{
    public:
        InterfacePrincipal();
        virtual ~InterfacePrincipal();

        void ExecutarPrincipal();

    protected:

    private:
        InterfaceCadastroClientes* interfaceClientes;
        InterfaceCadastroFornecedores* interfaceFornecedores;
        InterfaceCadastroContasPagar* interfaceContasPagar;
        InterfaceCadastroContasReceber* interfaceContasReceber;

        int obterOpcao();
};

#endif // INTERFACEPRINCIPAL_H
