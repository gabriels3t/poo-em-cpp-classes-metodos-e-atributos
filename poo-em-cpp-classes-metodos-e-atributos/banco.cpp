#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

int main()
{
    Conta umaConta;
   

    Conta umaOutraConta;

    umaOutraConta.depositar(600);
    umaOutraConta.sacar(200);

    cout << "saldo em outra conta!" << umaOutraConta.saldo << endl;

}