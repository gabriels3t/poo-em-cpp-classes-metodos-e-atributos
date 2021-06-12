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
    Conta umaConta("4931-5", "123.456.789-10", "Gabriel");
    umaConta.depositar(500); 
    Conta umaOutraConta("7931-5", "123.676.789-10", "Jose");
    umaConta.depositar(500);
    
    cout << "Ola ! "<< umaConta.getNomeTitular() << endl;
    ExibirSaldo(umaConta);
    // pode-se utilizar nomeDaClasse:: quando o metodo for estatico
    cout << "Numero de contas  : " << Conta::getNumeroDeContas() << endl;

}