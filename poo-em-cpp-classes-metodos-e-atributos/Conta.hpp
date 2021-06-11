#pragma once
#include <string>


//struct tudo é publico e uuma class tudo é privado 
class Conta
{
private:
    std::string numeroConta;
    std::string cpfTitular;
    std::string nomeTitular;
    float saldo =0.0f;
public: 
    void sacar(float valorSaque);
    void depositar(float valordeposito);
    float getSaldo() const; // deixando a função constante
    void setNomeTitular(std::string nomeTitular);
    std::string getNomeTitular();
    void setNumeroConta(std::string numero);
    std::string getNumeroConta();
    void setCpfTitular(std::string cpf);
    std::string getCpfTitular();

};
