#pragma once
#include <iostream>
#include <vector>
#include "Funcionario.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h" 

class SistemaGerenciarFolha : public Funcionario{

    private:
        std::vector <Assalariado> assalariados;
        std::vector <Horista> horistas;
        std::vector <Comissionado> comissionados;


    public:
        SistemaGerenciarFolha();
        
        void setFuncionarios(Assalariado assalariado);

        void setFuncionarios(Horista horista);

        void setFuncionarios(Comissionado comissionado);

        double calculaValorTotalFolha();

        double consultaSalarioFuncionario(); 
};