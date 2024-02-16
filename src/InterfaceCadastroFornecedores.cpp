#include "InterfaceCadastroFornecedores.h"
#include<iostream>
#include<stdlib.h>

InterfaceCadastroFornecedores::InterfaceCadastroFornecedores()
{
    listaFornecedores = new ListaFornecedores();

}
InterfaceCadastroFornecedores::~InterfaceCadastroFornecedores()
{
    delete listaFornecedores;

}
int InterfaceCadastroFornecedores::obterOpcaoFornecedor()
{
    int opcao;

    cout<<"1-Incluir"<<endl;
    cout<<"2-Alterar"<<endl;
    cout<<"3-Excluir"<<endl;
    cout<<"4-Listar"<<endl<<endl;
    cout<<"0-Voltar"<<endl<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"Opcao: ";
    cin>>opcao;

    return opcao;
}
void InterfaceCadastroFornecedores::incluirFornecedor()
{
    string nome;
    string email;
    string telefone;
    string cnpj;

    cout<<"Inclusao de um novo fornecedor"<<endl<<endl;
    cout<<"Digite o nome: ";
    cin>>nome;
    cout<<"Digite o email: ";
    cin>>email;
    cout<<"Digite o telefone: ";
    cin>>telefone;
    cout<<"Digite o CNPJ: ";
    cin>>cnpj;

    Fornecedor* fornecedor= new Fornecedor();
    fornecedor->atualizarNome(nome);
    fornecedor->atualizarEmail(email);
    fornecedor->atualizarTelefone(telefone);
    fornecedor->atualizarCnpj(cnpj);
    listaFornecedores->incluir(fornecedor);

    cout<<endl<<"Fornecedor incluido!"<<endl;
    system("pause");

}
void InterfaceCadastroFornecedores::alterarFornecedor()
{
    string nome;
    string email;
    string telefone;
    string cnpj;

    cout<<"Alteracao"<<endl<<endl;
    cout<<"Digite o nome: ";
    cin>>nome;


    Fornecedor* fornecedor = listaFornecedores->localizarNome(nome);

    if (fornecedor!= NULL){
        cout<<"Digite o novo nome: ";
        cin>>nome;
        cout<<"Digite o novo email: ";
        cin>>email;
        cout<<"Digite o novo telefone: ";
        cin>>telefone;
        cout<<"Digite o novo CNPJ: ";
        cin>>cnpj;
        fornecedor->atualizarNome(nome);
        fornecedor->atualizarEmail(email);
        fornecedor->atualizarTelefone(telefone);
        fornecedor->atualizarCnpj(cnpj);
        cout<<endl<<"fornecedor alterado!"<<endl;
        system("pause");
    }else{
        cout<<"Cliente nao localizado"<<endl;
        system("pause");
    }
}
void InterfaceCadastroFornecedores::excluirFornecedor()
{
    string nome;

    cout<<"Exclusao"<<endl<<endl;
    cout<<"Digite o nome: ";
    cin>>nome;


    Fornecedor* fornecedor = listaFornecedores->excluir(nome);

    if (fornecedor!=NULL){
        cout<<"Cliente excluido:"<< fornecedor->obterNome()<<endl;
        delete fornecedor;
    }else{
        cout<<"Cliente nao localizado"<<endl;
        system("pause");
    }
  system("pause");
}

void InterfaceCadastroFornecedores::executarFornecedor()
{
    int opcao;

    do{
        opcao=obterOpcaoFornecedor();

        switch(opcao){

            case 1:
                incluirFornecedor();
                system("cls");
                break;
            case 2:
                alterarFornecedor();
                system("cls");
                break;
            case 3:
                excluirFornecedor();
                system("cls");
                break;
            case 4:
                listarFornecedores();
                system("cls");
                break;
            case 0:
                system("cls");
                break;
             default:
                cout << "Entre com um valor valido"<<endl;
                system("pause");
                system("cls");
                break;

        }
    }while(opcao!=0);
}

void InterfaceCadastroFornecedores::listarFornecedores()
{
    if (!listaFornecedores->listaVazia()){

        listaFornecedores->irParaPrimeiro();
        Fornecedor *fornecedor = listaFornecedores->obterProximo();

        while (fornecedor!=NULL){
            cout<<"Nome: "<<fornecedor->obterNome() <<endl;
            cout<<"Email: "<<fornecedor->obterEmail() <<endl;
            cout<<"Telefone: "<<fornecedor->obterTelefone() <<endl;
            cout<<"CNPJ: "<<fornecedor->obterCnpj()<<endl;
            fornecedor=listaFornecedores->obterProximo();
            system("pause");
        }
    }
}

