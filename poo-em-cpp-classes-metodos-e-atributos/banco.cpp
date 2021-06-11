#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

void ExibirSaldo(const Conta& conta) {
    cout.precision(2);
    cout << fixed;
    cout << "Seu saldo e de R$:" << conta.getSaldo() << endl;
}

int main()
{
    Conta umaConta;
    umaConta.setNomeTitular("Gabriel");
    umaConta.depositar(500);
    
    cout << "Ola ! "<< umaConta.getNomeTitular() << endl;
    ExibirSaldo(umaConta);



}