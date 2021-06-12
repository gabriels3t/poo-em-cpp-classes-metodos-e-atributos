#include <iostream>
#include "Conta.hpp"
int Conta::numeroDeContas = 0;

// fazendo o construtor assim, o compilador nao precisa alocar 2 vezes a memoria.
//assim deixando o codigo um pouco mais rapido
Conta::Conta(std::string numero, std::string cpf, std::string nome) 
    : numeroConta(numero),cpfTitular(cpf),nomeTitular(nome),saldo(0.0f) {
    verificaTamanhoDoNome();
    numeroDeContas++;
}

Conta::~Conta() {
    numeroDeContas--;
}

void Conta::sacar(float valorSaque) {
    if (valorSaque < 0 || valorSaque > saldo) {
        return;
    }
    saldo -= valorSaque;
}

void Conta::depositar(float valordeposito) {
    if (valordeposito < 0) {
        return;
    }
    saldo += valordeposito;
}

float Conta::getSaldo() const {
    return saldo;
}
std::string Conta::getNomeTitular() const {
    return nomeTitular;
}
std::string Conta::getNumeroConta() const {
    return numeroConta;
}
std::string Conta::getCpfTitular() const {
    return cpfTitular;
}

int Conta::getNumeroDeContas()  {
    return numeroDeContas;
}
void Conta::verificaTamanhoDoNome() {
    if (nomeTitular.size() < 5) {
        std::cout << "Nome muito curto" << std::endl;
        exit(1);
    }
}