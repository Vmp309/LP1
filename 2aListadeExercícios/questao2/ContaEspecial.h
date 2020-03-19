#pragma once
#include "Conta.h"
class ContaEspecial : public Conta
{
public:
	//Construtor
	ContaEspecial();

	//Destrutor
	~ContaEspecial();

//Sobreescrevendo o metodo definirLimite
	void definirLimite(double valor);
};
