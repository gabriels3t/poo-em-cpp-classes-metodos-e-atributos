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