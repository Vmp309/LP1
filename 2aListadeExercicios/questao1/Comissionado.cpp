#include "Comissionado.h"

Comissionado::Comissionado(){}

void Comissionado::setVendasSemanais(double VendasSemanais){
    vendasSemanais = VendasSemanais;
}

void Comissionado::setPercentalComissao(double PercentualComissao){
    percentualComissao = PercentualComissao;
}

double Comissionado::getVendasSemanais(){
    return vendasSemanais;
}

double Comissionado::getPercentualComissao(){
    return percentualComissao;
}