#pragma once
#include <string>


//struct tudo � publico e uuma class tudo � privado 
class Conta
{
private:
    std::string numeroConta;
    std::string cpfTitular;
    std::string nomeTitular;
public: 
    void sacar(float valorSaque);
    void depositar(float valordeposito);

};
