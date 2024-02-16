#include "InterfaceCadastroContasPagar.h"
#include<iostream>
#include<stdlib.h>
#include<time.h>

InterfaceCadastroContasPagar::InterfaceCadastroContasPagar()
{
    listaContasPagar = new ListaContasPagar();

}
InterfaceCadastroContasPagar::~InterfaceCadastroContasPagar()
{
    delete listaContasPagar;

}
int InterfaceCadastroContasPagar::obterOpcaoContasPagar()
{
    int opcao;

    cout<<"1-Incluir conta a pagar"<<endl;
    cout<<"2-Alterar conta a pagar"<<endl;
    cout<<"3-Excluir conta a pagar"<<endl;
    cout<<"4-Listar contas a pagar"<<endl;
    cout<<"5-Efetuar pagamento de uma conta"<<endl<<endl;
    cout<<"0-Voltar"<<endl<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"Opcao: ";
    cin>>opcao;

    return opcao;
}
void InterfaceCadastroContasPagar::incluirContasPagar()
{
    string descricao;
    string dataVencimento;
    string fornecedor;
    float valor;

    cout << "Inclusao de uma nova conta" << endl << endl;
    cout << "Digite uma descricao para a conta: ";
    cin >> descricao;
    cout << "Digite o nome do fornecedor: ";
    cin >> fornecedor;
    cout << "Digite a data para vencimento da conta mm/dd/aa: ";
    cin >> dataVencimento;
    cout << "Digite o Valor da conta: ";
    cin >> valor;

    ContasPagar* contasPagar= new ContasPagar();

    contasPagar->atualizarDescricao(descricao);
    contasPagar->atualizarFornecedor(fornecedor);
    contasPagar->atualizarDataVencimento(dataVencimento);
    contasPagar->atualizarValor(valor);
    listaContasPagar->incluir(contasPagar);

    cout<<endl<<"Conta incluida!"<<endl;
    system("pause");

}
void InterfaceCadastroContasPagar::alterarContasPagar()
{
    string descricao;
    string dataVencimento;
    string fornecedor;
    float valor;

    cout<<"Alteracao"<<endl<<endl;
    cout<<"Digite o nome do fornecedor: ";
    cin>>fornecedor;


    ContasPagar* contasPagar = listaContasPagar->localizarFornecedor(fornecedor);

    if (contasPagar!= NULL){
            cout << "Digite uma nova descricao para a conta: ";
            cin >> descricao;
            cout<<"Digite o novo nome de fornecedor: ";
            cin>>fornecedor;
            cout<<"Digite uma  nova data de vencimento mm/dd/aa: ";
            cin>>dataVencimento;
            cout<<"Digite um novo vaalor para a conta: ";
            cin>>valor;

            contasPagar->atualizarDescricao(descricao);
            contasPagar->atualizarFornecedor(fornecedor);
            contasPagar->atualizarDataVencimento(dataVencimento);
            contasPagar->atualizarValor(valor);
            cout<<endl<<"Conta alterada!"<<endl;
            system("pause");
            }else{
                cout<<"Cliente nao localizado"<<endl;
                system("pause");
                }
}
void InterfaceCadastroContasPagar::excluirContasPagar()
{
    string fornecedor;

    cout<<"Exclusao"<<endl<<endl;
    cout<<"Digite o nome do fornecedor: ";
    cin>>fornecedor;

    ContasPagar* contasPagar=listaContasPagar->excluir(fornecedor);

    if (contasPagar!=NULL){

        cout<<"Conta excluida:"<< contasPagar->obterFornecedor()<<endl;
        delete contasPagar;
        }else{
            cout<<"Conta nao localizada"<<endl;
            system("pause");
    }
    system("pause");
}

void InterfaceCadastroContasPagar::listarContasPagar()
{
    if (!listaContasPagar->listaVazia()){

        listaContasPagar->irParaPrimeiro();
        ContasPagar *contasPagar = listaContasPagar->obterProximo();

        while (contasPagar!=NULL){
            cout<<"Descricao da conta: "<<contasPagar->obterDescricao()<<endl;
            cout<<"Data de vencimento: "<<contasPagar->obterDataVencimento()<<endl;
            cout<<"Nome fornecedor: "<<contasPagar->obterFornecedor()<<endl;
            cout<<"Valor total da conta: "<<contasPagar->obterValor()<<endl;
            cout<<"Data do pagamento: "<<contasPagar->obterDataPagamento()<<endl;
            cout<<"Valor Pago: "<<contasPagar->obterValorPago()<<endl;
            contasPagar = listaContasPagar->obterProximo();
            system("pause");
        }
    }
}

void InterfaceCadastroContasPagar::executarContasPagar()
{
    int opcao;

    do{
        opcao=obterOpcaoContasPagar();

        switch(opcao){

            case 1:
                incluirContasPagar();
                system("cls");
                break;
            case 2:
                alterarContasPagar();
                system("cls");
                break;
            case 3:
                excluirContasPagar();
                system("cls");
                break;
            case 4:
                listarContasPagar();
                system("cls");
                break;
            case 5:
                pagarContasPagar();
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

void InterfaceCadastroContasPagar::pagarContasPagar()
{
    string fornecedor;
    string dataPagamento;
    char data[9];
    float valorPago;
    _strdate(data);//obtem a data atual do sistema

    cout<<"Pagamento de contas a pagar"<<endl<<endl;
    cout<<"Digite o nome do fornecedor: ";
    cin>>fornecedor;

    ContasPagar* contasPagar = listaContasPagar->localizarFornecedor(fornecedor);

    if (contasPagar!= NULL){
        cout << "Digite o valor que deseja pagar da conta: ";
        cin >> valorPago;

        dataPagamento = (string)data; //Força a variavel data ser tipo string
        contasPagar->atualizarDataPagamento(dataPagamento);
        contasPagar->atualizarValorPago(contasPagar->obterValorPago()+ valorPago);
        cout<<endl<<"Pagamento efetuado!"<<endl;
        system("pause");

        if(contasPagar->obterValor()==contasPagar->obterValorPago()){
                cout << "Conta excluida da lista, conta quitada!" << endl;
                listaContasPagar->excluir(fornecedor);
                system("pause");
                }
        }else{
            cout<<"Conta nao localizada"<< endl;
            system("Pause");
            }
}


