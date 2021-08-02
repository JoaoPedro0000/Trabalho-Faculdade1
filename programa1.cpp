#include <iostream>

using namespace std;

    string nome;
    int idade;
    string cidade;

int main(){
    cout << "Realizar cadastro\n";
    
    cout << "Digite seu nome: ";
    cin >> nome;
    cout << nome << ", qual sua idade? ";
    cin >> idade;
    cout << "Qual sua cidade atual? ";
    cin >> cidade;

    cout << nome << " tem " << idade << " anos e mora em " << cidade;
    cout << "\nCadastro realizado com sucesso!";
}