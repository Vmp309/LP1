#pragma once
#include "Funcionario.h"

class Comissionado : public Funcionario{
    private:
        double vendasSemanais;
        double percentualComissao;

    public:
        //Construtor
        Comissionado();


        //Metodos set
        void setVendasSemanais(double VendasSemanais);

        void setPercentalComissao(double PercentualComissao);

        
        //Metodos get
        double getVendasSemanais();

        double getPercentualComissao();


        //Metodo abstrato da classe Funcionario
        double calcularSalario(){
            return (percentualComissao/100) * vendasSemanais;
        }
};