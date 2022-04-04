#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

class Operacoes{
    
    public:
        void cadastro(string nome, string senha, string email, string nivel){
            cout << "\nCadastro do Usuário realizado com sucesso :3 \n";

        }

        string login(string nome, string senha){
            return "\nSeja Bem Vindo <3 \n";
        }
        string trocarSenha(string nome, string senha){
            return "\nSenha Alterada u.u \n";
        }
};