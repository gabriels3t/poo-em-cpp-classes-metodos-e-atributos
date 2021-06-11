#include "Conta.hpp"

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
void Conta::setNomeTitular(std::string nome) {
    nomeTitular = nome;
}
std::string Conta::getNomeTitular() {
    return nomeTitular;
}
void Conta::setNumeroConta(std::string numero) {
    numeroConta = numero;
}
std::string Conta::getNumeroConta() {
    return numeroConta;
}
void Conta::setCpfTitular(std::string cpf) {
    cpfTitular = cpf;
}
std::string Conta::getCpfTitular() {
    return cpfTitular;
}
