#ifndef NOLISTACONTASPAGAR_H
#define NOLISTACONTASPAGAR_H
#include<ContasPagar.h>

class NoListaContasPagar
{
    public:
        NoListaContasPagar();
        virtual ~NoListaContasPagar();

        ContasPagar* obterContasPagar();
        NoListaContasPagar* obterProximoNo();
        void atualizarContasPagar(ContasPagar* contasPagar);
        void atualizarProximoNo(NoListaContasPagar* ProximoNo);
    protected:
    private:
        ContasPagar* contasPagar;
        NoListaContasPagar* proximoNo;
};

#endif // NOLISTACONTASPAGAR_H
