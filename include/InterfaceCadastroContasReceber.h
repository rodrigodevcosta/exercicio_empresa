#ifndef INTERFACECADASTROCONTASRECEBER_H
#define INTERFACECADASTROCONTASRECEBER_H
#include<ListaContasReceber.h>
#include<ContasReceber.h>


class InterfaceCadastroContasReceber
{
    public:
        InterfaceCadastroContasReceber();
        virtual ~InterfaceCadastroContasReceber();


        void executarContasReceber();
    protected:
    private:
        ListaContasReceber* listaContasReceber;
        int obterOpcaoContasReceber();
        void incluirContasReceber();
        void alterarContasReceber();
        void excluirContasReceber();
        void receberContasReceber();
        void listarContasReceber();
};

#endif // INTERFACECADASTROCONTASRECEBER_H
