#include "InterfaceCadastroContasReceber.h"
#include<iostream>
#include<stdlib.h>
#include<time.h>

InterfaceCadastroContasReceber::InterfaceCadastroContasReceber()
{
    listaContasReceber = new ListaContasReceber();

}
InterfaceCadastroContasReceber::~InterfaceCadastroContasReceber()
{
    delete listaContasReceber;

}
int InterfaceCadastroContasReceber::obterOpcaoContasReceber()
{
    int opcao;
    cout<<"1-Incluir conta a receber"<<endl;
    cout<<"2-Alterar conta a receber"<<endl;
    cout<<"3-Excluir conta a receber"<<endl;
    cout<<"4-Listar contas a receber"<<endl;
    cout<<"5-Efetuar pagamento de uma conta"<<endl<<endl;
    cout<<"0-Voltar"<<endl<<endl;
     cout<<"------------------------------"<<endl;
    cout<<"Opcao: ";
    cin>>opcao;

    return opcao;
}
void InterfaceCadastroContasReceber::incluirContasReceber()
{
    string descricao;
    string dataVencimento;
    string cliente;
    float valor;

    cout << "Inclusao" << endl << endl;
    cout << "Digite uma descricao para a conta: ";
    cin >> descricao;
    cout << "Digite o nome do cliente: ";
    cin >> cliente;
    cout << "Digite a data para vencimento da conta mm/dd/aa: ";
    cin >> dataVencimento;
    cout << "Digite o Valor da conta: ";
    cin >> valor;

    ContasReceber* contasReceber = new ContasReceber();

    contasReceber->atualizarDescricao(descricao);
    contasReceber->atualizarCliente(cliente);
    contasReceber->atualizarDataVencimento(dataVencimento);
    contasReceber->atualizarValor(valor);
    listaContasReceber->incluir(contasReceber);

    cout<<endl<<"Conta incluida!"<<endl;
    system("pause");

}
void InterfaceCadastroContasReceber::alterarContasReceber()
{
    string descricao;
    string dataVencimento;
    string cliente;
    float valor;

    cout<<"Alteracao"<<endl<<endl;
    cout<<"Digite o nome do cliente: ";
    cin>>cliente;


    ContasReceber* contasReceber = listaContasReceber->localizarCliente(cliente);

    if (contasReceber!= NULL){
        cout << "Digite uma nova descricao para a conta: ";
        cin >> descricao;
        cout<<"Digite o novo nome de cliente: ";
        cin>>cliente;
        cout<<"Digite uma  nova data de vencimento mm/dd/aa: ";
        cin>>dataVencimento;
        cout<<"Digite um novo valor para a conta: ";
        cin>>valor;

        contasReceber->atualizarDescricao(descricao);
        contasReceber->atualizarCliente(cliente);
        contasReceber->atualizarDataVencimento(dataVencimento);
        contasReceber->atualizarValor(valor);
        cout<<endl<<"Conta alterada!"<<endl;
        system("pause");
        }else{
            cout<<"Cliente não localizado"<<endl;
            system("pause");
            }

}
void InterfaceCadastroContasReceber::excluirContasReceber()
{
    string cliente;

    cout<<"Exclusao"<<endl<<endl;
    cout<<"Digite o nome do cliente: ";
    cin>>cliente;


    ContasReceber* contasReceber = listaContasReceber->excluir(cliente);

    if (contasReceber!=NULL){
        cout<<"Conta excluida:"<<contasReceber->obterCliente()<<endl;

        delete contasReceber;
        }else{
            cout<<"Conta nao localizada"<<endl;
            system("pause");
        }
    system("pause");
}

void InterfaceCadastroContasReceber::listarContasReceber()
{
    if (!listaContasReceber->listaVazia()){

        listaContasReceber->irParaPrimeiro();
        ContasReceber *contasReceber = listaContasReceber->obterProximo();

        while (contasReceber!=NULL){
            cout<<" Descricao da conta: "<<contasReceber->obterDescricao()<<endl;
            cout<<" Data de vencimento: "<<contasReceber->obterDataVencimento()<<endl;
            cout<<" Nome cliente: "<<contasReceber->obterCliente()<<endl;
            cout<<" Valor total da conta: "<<contasReceber->obterValor()<<endl;
            cout<<" Data do recebimento: "<<contasReceber->obterDataRecebimento()<<endl;
            cout<<" Valor recebido: "<<contasReceber->obterValorRecebido()<<endl;
            contasReceber = listaContasReceber->obterProximo();
            system("pause");
        }
    }
}

void InterfaceCadastroContasReceber::executarContasReceber()
{
    int opcao;

    do{
        opcao=obterOpcaoContasReceber();

        switch(opcao){

            case 1:
                incluirContasReceber();
                system("cls");
                break;
            case 2:
                alterarContasReceber();
                system("cls");
                break;
            case 3:
                excluirContasReceber();
                system("cls");
                break;
            case 4:
                listarContasReceber();
                system("cls");
                break;
            case 5:
                receberContasReceber();
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

void InterfaceCadastroContasReceber::receberContasReceber()
{
    string cliente;
    string dataRecebimento;
    char data[9];
    float valorRecebido;
     _strdate(data);//obtem a data atual do sistema

    cout<<"Recebimento de contas a receber"<<endl<<endl;
    cout<<"Digite o nome do cliente: ";
    cin>>cliente;

    ContasReceber* contasReceber = listaContasReceber->localizarCliente(cliente);

    if (contasReceber!= NULL){
        cout << "Digite o valor que deseja receber da conta: ";
        cin >> valorRecebido;

        dataRecebimento = (string)data; //Força a variavel data ser tipo string
        contasReceber->atualizarDataRecebimento(dataRecebimento);
        contasReceber->atualizarValorRecebido(contasReceber->obterValorRecebido()+ valorRecebido);
        cout<<endl<<"Recebimento efetuado!"<<endl;
        system("pause");

        if(contasReceber->obterValor()==contasReceber->obterValorRecebido()){
                cout << "Conta excluida da lista, conta quitada!" << endl;
                listaContasReceber->excluir(cliente);
                system("pause");
                }
        }else{
            cout<<"Conta nao localizada" << endl;
            system("Pause");
            }
}


