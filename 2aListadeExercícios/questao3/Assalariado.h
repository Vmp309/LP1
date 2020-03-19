#pragma once
#include "Funcionario.h"

class Assalariado : public Funcionario{

    private:
        double salario;

    public:
        //Construtor
        Assalariado();


        //Metodo set
        void setSalario (double Salario);

        //Metodo get
        double getSalario();

        //Metodo abstrato da classe Funcionario
        double calcularSalario(){
            return salario;
        };
};