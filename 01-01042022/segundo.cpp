#include <iostream>

int main(){


int n1 = 0;
int n2 = 0;
int n3 = 0;

std::cout << "Entre Com um Número: ";
std::cin >> n1;

std::cout << "Entre Com outro Número: ";
std::cin >> n2;

n3 = n1 + n2;

std::cout << "O Resultado é: " << n3 << "\n";

return 0;
}