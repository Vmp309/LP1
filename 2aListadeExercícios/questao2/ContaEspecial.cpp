#include "ContaEspecial.h"
#include "Conta.h"

//Construtor
ContaEspecial::ContaEspecial(){}

//Destrutor
ContaEspecial::~ContaEspecial(){}

void ContaEspecial::definirLimite(double salarioMensal) {
	setLimite(salarioMensal*3);
}