#ifndef NOLISTACLIENTES_H
#define NOLISTACLIENTES_H
#include<Clientes.h>


class NoListaClientes
{
    public:
        NoListaClientes();
        virtual ~NoListaClientes();

        Clientes* obterCliente();
        NoListaClientes* obterProximoNo();
        void atualizarCliente(Clientes* cliente);
        void atualizarProximoNo(NoListaClientes* ProximoNo);
    protected:
    private:
        Clientes* cliente;
        NoListaClientes* proximoNo;
};

#endif // NOLISTACLIENTES_H
