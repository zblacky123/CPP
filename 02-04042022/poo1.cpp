/*
Programa para trabalhar orientação
a objetos. USando classe e objetos
*/

#include <iostream>
    //Chamada da Biblioteca

using std::cout;
using std::cin;

class Textos{
    public:
    void mensagem1(){
        cout << "\nOlá!\n";

    }
    void mensagem2(){
        cout << "\nBom Dia!\n";
    }
};

int main(){
    Textos txt;
    txt.mensagem1();
    txt.mensagem2();
    
    return 0;
}