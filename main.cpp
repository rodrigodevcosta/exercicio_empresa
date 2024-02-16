/*
                                                            |
+ ---------------------- Requisitos -------------------------- +
|                             |                                |
| - Cadastro clientes         |  - Interface principal         |
| - Cadastro fornecedores     |  - Interface de cadastro       |
| - Cadastro contas receber   |  - Uso de Herança              |
| - Cadastro contas pagar     |  - Uso de encapsulamento       |
| - Listar contas receber     |  - Uso de polimorfismo         |
| - Listar contas pagar       |    (opcional)                  |
|                             |                                |
+ ------------------------------------------------------------ +
*/

#include <iostream>
#include<InterfacePrincipal.h>

using namespace std;

int main()
{
    InterfacePrincipal* interfacePrincipal;
    interfacePrincipal= new InterfacePrincipal();
    interfacePrincipal->ExecutarPrincipal();
    delete interfacePrincipal;
    return 0;
}
