#ifndef CLIENTES_H
#define CLIENTES_H
#include<DadosPessoais.h>
#include<string>

class Clientes: public DadosPessoais
{
    public:
        Clientes();
        virtual ~Clientes();

        string obterCpf();
        void atualizarCpf(string cpf);
    protected:

    private:
        string cpf;
};

#endif // CLIENTES_H
