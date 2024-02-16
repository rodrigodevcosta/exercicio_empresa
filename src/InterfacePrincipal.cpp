#include"InterfacePrincipal.h"
#include<iostream>
#include<stdlib.h>

InterfacePrincipal::InterfacePrincipal()
{
    interfaceClientes = new InterfaceCadastroClientes();
    interfaceFornecedores = new InterfaceCadastroFornecedores();
    interfaceContasPagar = new InterfaceCadastroContasPagar();
    interfaceContasReceber = new InterfaceCadastroContasReceber();
}

InterfacePrincipal::~InterfacePrincipal()
{
    delete interfaceClientes;
    delete interfaceFornecedores;
    delete interfaceContasPagar;
    delete interfaceContasReceber;
}

int InterfacePrincipal::obterOpcao()
{
    int opcao;

    cout<<"1-Menu Cliente"<<endl;
    cout<<"2-Menu Fornecedor"<<endl;
    cout<<"3-Menu Contas Pagar"<<endl;
    cout<<"4-Menu Contas Receber"<<endl<<endl;
    cout<<"0-Sair"<<endl<<endl;
    cout<<"Opcao: ";
    cin>>opcao;

    return opcao;
}

void InterfacePrincipal::ExecutarPrincipal()
{
    int opcao;

    do{
        opcao=obterOpcao();

        switch(opcao){

            case 1:
                system("cls");
                interfaceClientes->executarCliente();
                break;
            case 2:
                system("cls");
                interfaceFornecedores->executarFornecedor();
                break;
            case 3:
                system("cls");
                interfaceContasPagar->executarContasPagar();
                break;
            case 4:
                system("cls");
                interfaceContasReceber->executarContasReceber();
                break;
            case 0:
                break;
            default:
                cout << "Digite um numero valido!"<<endl;
                system("pause");
                system("cls");
                break;
        }
    }while(opcao!=0);
}
