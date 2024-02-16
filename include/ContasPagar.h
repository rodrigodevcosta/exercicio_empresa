#ifndef CONTASPAGAR_H
#define CONTASPAGAR_H
#include<DadosContas.h>
#include<string>

class ContasPagar:public DadosContas
{
    public:
        ContasPagar();
        virtual ~ContasPagar();

        string obterFornecedor();
        void atualizarFornecedor(string fornecedor);
        string obterDataPagamento();
        void atualizarDataPagamento(string dataPagamento);
        float obterValorPago();
        void atualizarValorPago(float valorPago);
    protected:

    private:
        string fornecedor;
        string dataPagamento;
        float valorPago;


};

#endif // CONTASPAGAR_H
