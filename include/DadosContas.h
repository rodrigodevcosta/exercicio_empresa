#ifndef DADOSCONTAS_H
#define DADOSCONTAS_H
#include<string>

using namespace std;

class DadosContas
{
    public:
        DadosContas();
        virtual ~DadosContas();

        string obterDescricao();
        void atualizarDescricao(string descricao);
        string obterDataVencimento();
        void atualizarDataVencimento(string dataVencimento);
        float obterValor();
        void atualizarValor(float valor);
    protected:

    private:
        string descricao;
        string dataVencimento;
        float valor;

};

#endif // DADOSCONTAS_H
