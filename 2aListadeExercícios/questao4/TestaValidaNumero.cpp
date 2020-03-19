#include "TestaValidaNumero.h"

TestaValidaNumero::TestaValidaNumero(){}

void TestaValidaNumero::ValidaNumero(int num){
    
    if (num <= 0){
        ValorAbaixoException e = ValorAbaixoException();
        throw e;
    }
    else if (num > 100 && num < 1000){
        ValorAcimaException e = ValorAcimaException();
        throw e;
    }
    else if (num >= 1000){
        ValorMuitoAcimaException e = ValorMuitoAcimaException();
        throw e;
    }
}