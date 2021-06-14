#pragma once
#include <string>
class Cpf
{
private:
	std::string cpf;
	
public:
	Cpf(std::string cpf);
private:
	void cpfExiste();
	int* pegandoNumerosCpf();
	void verificandoPrimeiroDigito(); 
	void verificandoSegundoDigito();
	int verificadorDosUltimosDigitos(int somatoria);
	void mensagemCpfNaoExiste();
};

