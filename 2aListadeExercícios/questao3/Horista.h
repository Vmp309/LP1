#pragma once
#include "Funcionario.h"

class Horista : public Funcionario{
    private:
        double salarioHora;
        double horasTrabalhadas;

    public:
        //Construtor
        Horista();


        //Metodos set
        void setSalarioHora(double SalarioHora);

        void setHorasTrabalhadas(double HorasTrabalhadas);


        //Metodos get
        double getSalarioHora();

        double getHorasTrabalhadas();


        //Metodo abstrato da classe Funcionario
        double calcularSalario(){
            return salarioHora * horasTrabalhadas;
        }
};