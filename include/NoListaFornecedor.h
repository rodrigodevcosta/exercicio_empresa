#ifndef NOLISTAFORNECEDOR_H
#define NOLISTAFORNECEDOR_H
#include<Fornecedor.h>


class NoListaFornecedor
{
    public:
        NoListaFornecedor();
        virtual ~NoListaFornecedor();

        Fornecedor* obterFornecedor();
        NoListaFornecedor* obterProximoNo();
        void atualizarFornecedor(Fornecedor* fornecedor);
        void atualizarProximoNo(NoListaFornecedor* ProximoNo);
    protected:
    private:
        Fornecedor* fornecedor;
        NoListaFornecedor* proximoNo;
};

#endif // NOLISTAFORNECEDOR_H
