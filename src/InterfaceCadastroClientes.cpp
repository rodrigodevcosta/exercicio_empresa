#include "InterfaceCadastroClientes.h"
#include<iostream>
#include<stdlib.h>

InterfaceCadastroClientes::InterfaceCadastroClientes()
{
    listaClientes = new ListaClientes();

}
InterfaceCadastroClientes::~InterfaceCadastroClientes()
{
    delete listaClientes;

}
int InterfaceCadastroClientes::obterOpcaoCliente()
{
    int opcao;

    cout<<"1-Incluir"<<endl;
    cout<<"2-Alterar"<<endl;
    cout<<"3-Excluir"<<endl;
    cout<<"4-Listar"<<endl<<endl;
    cout<<"0-Voltar"<<"|"<<endl<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"Opcao: ";
    cin>>opcao;

    return opcao;
}
void InterfaceCadastroClientes::incluirCliente()
{
    string nome;
    string email;
    string telefone;
    string cpf;

    cout<<" Inclusao de um novo cliente"<<endl<<endl;
    cout<<"Digite o nome: ";
    cin>>nome;
    cout<<"Digite o email: ";
    cin>>email;
    cout<<"Digite o telefone: ";
    cin>>telefone;
    cout<<"Digite o CPF: ";
    cin>>cpf;

    Clientes* cliente= new Clientes();
    cliente->atualizarNome(nome);
    cliente->atualizarEmail(email);
    cliente->atualizarTelefone(telefone);
    cliente->atualizarCpf(cpf);
    listaClientes->incluir(cliente);

    cout<<endl<<"Cliente incluido!"<<endl;
    system("pause");

}
void InterfaceCadastroClientes::alterarCliente()
{
    string nome;
    string email;
    string telefone;
    string cpf;

    cout<<"Alterar cliente"<<endl<<endl;
    cout<<"Digite o nome: ";
    cin>>nome;


    Clientes* cliente = listaClientes->localizarNome(nome);

    if (cliente!= NULL){
        cout<<"Digite o novo nome: ";
        cin>>nome;
        cout<<"Digite o novo email: ";
        cin>>email;
        cout<<"Digite o novo telefone: ";
        cin>>telefone;
        cout<<"Digite o novo CPF: ";
        cin>>cpf;

        cliente->atualizarNome(nome);
        cliente->atualizarEmail(email);
        cliente->atualizarTelefone(telefone);
        cliente->atualizarCpf(cpf);
        cout<<endl<<"Cliente alterado!"<<endl;
        system("pause");

        }else{
            cout<<"Cliente nao localizado"<<endl;
            system("pause");
        }


}
void InterfaceCadastroClientes::excluirCliente()
{
    string nome;

    cout<<"Excluir um cliente"<<endl<<endl;
    cout<<"Digite o nome: ";
    cin>>nome;


    Clientes* cliente=listaClientes->excluir(nome);

    if (cliente!=NULL){
            cout<<"Cliente excluido:"<< cliente->obterNome()<<endl;
            delete cliente;
            }else{
                cout<<"Cliente nao localizado"<<endl;
                system("pause");
                }

    system("pause");
}

void InterfaceCadastroClientes::executarCliente()
{
    int opcao;

    do{
        opcao=obterOpcaoCliente();

        switch(opcao){

            case 1:
                incluirCliente();
                system("cls");
                break;
            case 2:
                alterarCliente();
                system("cls");
                break;
            case 3:
                excluirCliente();
                system("cls");
                break;
            case 4:
                listarClientes();
                system("cls");
                break;
            case 0:
                system("cls");
                break;
            default:
                cout << "Digite um numero valido!" << endl;
                system("pause");
                system("cls");
                break;

        }
    }while(opcao!=0);
}

void InterfaceCadastroClientes::listarClientes()
{
    if (!listaClientes->listaVazia()){
            listaClientes->irParaPrimeiro();
            Clientes *cliente = listaClientes->obterProximo();

        while (cliente!=NULL){
                cout<<"Nome: "<<cliente->obterNome() <<endl;
                cout<<"Email: "<<cliente->obterEmail() <<endl;
                cout<<"Telefone: "<<cliente->obterTelefone() <<endl;
                cout<<"CPF: "<<cliente->obterCpf()<<endl;
                cliente=listaClientes->obterProximo();
                system("pause");
        }
    }
}

