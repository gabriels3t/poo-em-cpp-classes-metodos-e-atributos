#include <iostream>
#include <string>

using namespace std;

struct Conta
{
    string numeroConta;
    string cpfTitular;
    string nomeTitular;
    float saldo;


};

void sacar(Conta conta, float valorSaque) {
    if (valorSaque < 0 || valorSaque > conta.saldo) {
        return;
    }
    conta.saldo -= valorSaque;
}
void depositar(Conta& conta, float valordepositado) {
    if (valordepositado < 0 ) {
        return;
    }
    conta.saldo += valordepositado;
}


int main()
{
    Conta umaConta;
    umaConta.cpfTitular = "123.456.789-10";
    umaConta.nomeTitular = "Gabriel";
    umaConta.numeroConta = "14589-10";
    umaConta.saldo = 500.45f;

    Conta umaOutraConta;
    umaOutraConta.saldo = 100.0f;

    depositar(umaOutraConta, 500);

    cout << "saldo em outra conta!" << umaOutraConta.saldo << endl;

}