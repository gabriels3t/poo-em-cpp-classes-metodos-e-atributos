#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"

using namespace std;

void ExibirSaldo(const Conta& conta) {
    cout.precision(2);
    cout << fixed;
    cout << "Seu saldo e de R$:" << conta.getSaldo() << endl;
   
}

int main()
{
    Conta umaConta("4931-5", Titular("123.456.789-10","gabriel"));
    umaConta.depositar(500); 
    Conta umaOutraConta("4931-5", Titular("845.445.789-10", "jose"));
    
    ExibirSaldo(umaConta);
    // pode-se utilizar nomeDaClasse:: quando o metodo for estatico
    cout << "Numero de contas  : " << Conta::getNumeroDeContas() << endl;

}