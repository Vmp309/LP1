#include "SistemaGerenciarFolha.h"

//Construtor
SistemaGerenciarFolha::SistemaGerenciarFolha(){}


void SistemaGerenciarFolha::setFuncionarios(Assalariado assalariado){
    assalariados.push_back(assalariado);
}

void SistemaGerenciarFolha::setFuncionarios(Horista horista){
    horistas.push_back(horista);
}

void SistemaGerenciarFolha::setFuncionarios(Comissionado comissionado){
    comissionados.push_back(comissionado);
}


double SistemaGerenciarFolha::consultaSalarioFuncionario(){
    for(int i = 0; i < assalariados.size(); i++){
        std::cout << "Salario do salario do funcionario assalariado " << i << ": "  << assalariados[i].calcularSalario()
        << std::endl;
    }

    for(int i = 0; i < horistas.size(); i++){
        std::cout << "Salario do salario do funcionario horista " << i << ": " << horistas[i].calcularSalario()
        << std::endl;
    }

    for(int i = 0; i < comissionados.size(); i++){
        std::cout << "Salario do salario do funcionario comissionado " << i << ": "  << assalariados[i].calcularSalario()
        << std::endl;
    }
}


double SistemaGerenciarFolha::calculaValorTotalFolha(){
    double valor_total = 0;

    for(int i = 0; i < assalariados.size(); i++){
         valor_total += assalariados[i].calcularSalario(); 
    }

    for(int i = 0; i < horistas.size(); i++){
       valor_total += horistas[i].calcularSalario();   
    }

    for(int i = 0; i < comissionados.size(); i++){
        valor_total += comissionados[i].calcularSalario();
    }

    return valor_total;
}
