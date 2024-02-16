#ifndef DADOSPESSOAIS_H
#define DADOSPESSOAIS_H
#include<string>

using namespace std;

class DadosPessoais
{
    public:
        DadosPessoais();
        virtual ~DadosPessoais();

        string obterNome();
        string obterTelefone();
        string obterEmail();
        void atualizarNome(string nome);
        void atualizarEmail(string email);
        void atualizarTelefone(string telefone);
    protected:
    private:
        string nome;
        string email;
        string telefone;

};

#endif // DADOSPESSOAIS_H
