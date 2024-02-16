

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
