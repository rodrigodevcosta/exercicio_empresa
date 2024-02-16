#ifndef INTERFACECADASTROCONTASPAGAR_H
#define INTERFACECADASTROCONTASPAGAR_H
#include<ListaContasPagar.h>
#include<ContasPagar.h>


class InterfaceCadastroContasPagar
{
    public:
        InterfaceCadastroContasPagar();
        virtual ~InterfaceCadastroContasPagar();

        void executarContasPagar();
    protected:
    private:
        ListaContasPagar* listaContasPagar;
        int obterOpcaoContasPagar();
        void incluirContasPagar();
        void alterarContasPagar();
        void excluirContasPagar();
        void pagarContasPagar();
        void listarContasPagar();
};

#endif // INTERFACECADASTROCONTASPAGAR_H
