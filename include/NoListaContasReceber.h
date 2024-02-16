#ifndef NOLISTACONTASRECEBER_H
#define NOLISTACONTASRECEBER_H
#include<ContasReceber.h>


class NoListaContasReceber
{
    public:
        NoListaContasReceber();
        virtual ~NoListaContasReceber();

        ContasReceber* obterContasReceber();
        NoListaContasReceber* obterProximoNo();
        void atualizarContasReceber(ContasReceber* contasReceber);
        void atualizarProximoNo(NoListaContasReceber* ProximoNo);
    protected:
    private:
        ContasReceber* contasReceber;
        NoListaContasReceber* proximoNo;
};

#endif // NOLISTACONTASRECEBER_H
