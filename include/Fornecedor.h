#ifndef FORNECEDOR_H
#define FORNECEDOR_H
#include<DadosPessoais.h>
#include<string>


class Fornecedor: public DadosPessoais
{
    public:
        Fornecedor();
        virtual ~Fornecedor();

        void atualizarCnpj(string cnpj);
        string obterCnpj();
    protected:

    private:
        string cnpj;
};

#endif // FORNECEDOR_H
