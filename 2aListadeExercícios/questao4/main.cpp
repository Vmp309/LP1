#include "TestaValidaNumero.h"
#include <iostream>

using namespace std;

int main (){
    try{
    int numero = 0;
    cout << "Digite um numero qualquer: " << endl;
    cin >> numero;

    TestaValidaNumero valida = TestaValidaNumero();

    valida.ValidaNumero(numero);
    
    }catch(ValorAbaixoException e){
        cout << e.erro();
    }catch(ValorAcimaException e){
        cout << e.erro();
    }catch(ValorMuitoAcimaException e){
        cout << e.erro();
    }
    return 0;
}