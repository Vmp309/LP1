#include "Horista.h"

//Construtor
Horista::Horista(){}

//Metodos set
void Horista::setSalarioHora(double SalarioHora){
    salarioHora = SalarioHora;
}

void Horista::setHorasTrabalhadas(double HorasTrabalhadas){
    horasTrabalhadas = HorasTrabalhadas;
}


//Metodos get
double Horista::getSalarioHora(){
    return salarioHora;
}

double Horista::getHorasTrabalhadas(){
    return horasTrabalhadas;
}