#include "Titular.hpp"
#include <iostream>

Titular::Titular(std::string cpf, std::string nome):cpf(cpf),nome(nome) {
    verificaTamanhoDoNome();
}

void Titular::verificaTamanhoDoNome() {
    if (nome.size() < 5) {
        std::cout << "Nome muito curto" << std::endl;
        exit(1);
    }
}
std::string Titular::getNome() {
    return nome;
}
std::string Titular::getCpf() {
    return cpf;
}