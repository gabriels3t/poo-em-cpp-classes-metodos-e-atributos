#pragma once
#include <string>


//struct tudo � publico e uuma class tudo � privado 
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
    float getSaldo() const; // deixando a fun��o constante
    void setNomeTitular(std::string nomeTitular);
    std::string getNomeTitular();
    void setNumeroConta(std::string numero);
    std::string getNumeroConta();
    void setCpfTitular(std::string cpf);
    std::string getCpfTitular();

};
