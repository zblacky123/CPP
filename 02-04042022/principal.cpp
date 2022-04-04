#include <iostream>
#include "usuario.h"
#include "operacao.h"

int main(){
    system ("clear");

    Usuario us;
    Operacoes op;
    us.nome = "João";
    us.email = "joaovidaloka@gmail.com";
    us.senha = "336050665";
    us.nivel = "Admin";

    op.cadastro(us.email, us.nivel, us.nome, us.senha); 
    
    
    return 0;
}