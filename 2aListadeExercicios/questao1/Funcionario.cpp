#include "Funcionario.h"

//Construtores
Funcionario::Funcionario(){};


Funcionario::Funcionario(std::string Nome, int Matricula){
    nome = Nome;
    matricula = Matricula;
}


//Metodo set
void Funcionario::setNome( std::string Nome){
    nome = Nome;
}

void Funcionario::setMatricula(int Matricula){
    matricula = Matricula;
}


//Metodo get
std::string Funcionario::getNome(){
    return nome;
}

int Funcionario::getMatricula(){
    return matricula;
}
