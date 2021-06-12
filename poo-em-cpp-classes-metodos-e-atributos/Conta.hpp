#pragma once
#include <string>


//struct tudo � publico e uuma class tudo � privado 
class Conta
{
private:
    static int numeroDeContas;
    std::string numeroConta;
    std::string cpfTitular;
    std::string nomeTitular;
    float saldo;
public:
    Conta() = delete; //deletando o construtor padr�o 
    Conta(std::string numero, std::string cpf, std::string nome); //construtor
    ~Conta();//destrutor
    void sacar(float valorSaque);
    void depositar(float valordeposito);
    float getSaldo() const; // deixando a fun��o constante
    std::string getNomeTitular() const;
    std::string getNumeroConta() const;
    std::string getCpfTitular() const;
    static int getNumeroDeContas();
private:
    void verificaTamanhoDoNome();
};
