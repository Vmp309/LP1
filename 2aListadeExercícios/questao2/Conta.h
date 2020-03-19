#pragma once
#include <string>
#include <iostream>
#include "IConta.h"
class Conta : public IConta
{

private:
	std::string nomeCliente;
	double salarioMensal;
	std::string numeroConta;
	double saldo;
	double limite;

public:

	//Construtores
	Conta();
	Conta(std::string nomeCliente, double salarioMensal, std::string numeroConta, double saldo, double limite);

	//Destrutor
	~Conta();

	//Metodos set
	void setNomeCliente(std::string nomeCliente);

	void setSalarioMensal(double salarioMensal);
	
	void setNumeroConta(std::string numeroConta);
	
	void setSaldo(double saldo);

	void setLimite(double limite);


	//Metodos get
	std::string getNomeCliente();

	double getSalarioMensal();
	
	std::string getNumeroConta();
	
	double getSaldo();
	
	double getLimite();


	//Metodo sacar que lanca excecao
	void sacar2(double valor);

	//metodos abstrato da classe IConta
	void sacar(double valor){
		if (this->saldo >= valor) {
		 	this->saldo -= valor;
		 	std::cout << "Saque efetuado com sucesso" << std::endl;
	 	}
	 	else {
		 	std::cout << "Saldo insuficiente" << std::endl;
		}
	};

	void depositar(double valor){
		if (valor <= this->limite){
			this->saldo += valor;
			std::cout << "Deposito efetuado com sucesso" << std::endl;
		}else{
			std::cout << "Limite de deposito excedido" << std::endl;
		}
	};
	
	virtual void definirLimite();
};
