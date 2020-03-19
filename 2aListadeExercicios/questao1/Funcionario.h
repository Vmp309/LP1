#pragma once
#include <string>

class Funcionario{
    private:
        std::string nome; 
        int matricula;

    public:
        //Construtores
        Funcionario();
        Funcionario(std::string Nome, int Matricula);
        

        //Metodos set
        void setNome(std::string Nome);

        void setMatricula (int Matricula);


        //Metodos get
        std::string getNome();
        int getMatricula();

        //Metodo extra pedido na questao
        virtual double calcularSalario();

};