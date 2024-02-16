#ifndef CONTASRECEBER_H
#define CONTASRECEBER_H
#include<DadosContas.h>
#include<string>

class ContasReceber:public DadosContas
{
    public:
        ContasReceber();
        virtual ~ContasReceber();

        string obterCliente();
        void atualizarCliente(string cliente);
        string obterDataRecebimento();
        void atualizarDataRecebimento(string dataRecebimento);
        float obterValorRecebido();
        void atualizarValorRecebido(float valorRecebido);
    protected:

    private:
        string cliente;
        string dataRecebimento;
        float valorRecebido;

};

#endif // CONTASRECEBER_H
