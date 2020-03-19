#include "MesaRestaurante.h"
#include <sstream>

using namespace std;
MesaRestaurante::MesaRestaurante()
{
    indice = 0;
}

void MesaRestaurante::adicionaAoPedido(Pedido ped) {
    for (int i=0 ; i< MAX ; i++) {
        if (pedidos[i].getDescricao() == ped.getDescricao()) {
            pedidos[i].setQuant( pedidos[i].getQuant() + ped.getQuant() );
            return;
        }
    }

    pedidos[indice] = ped;
    indice++;
}

std::string MesaRestaurante::toString() {
    std::string saida;
    stringstream total;
    for (int i=0 ; i<indice ; i++) {
        saida += pedidos[i].toString() + "\n";
    }

    total << calculaTotal();
    saida += "Total: " + total.str();

    return saida;
}

void MesaRestaurante::zeraPedidos() {
    for (int i=0 ; i<MAX ; i++) {
        pedidos[i].setQuant(0);
    }
}

double MesaRestaurante::calculaTotal() {
    double total = 0;
    for (int i=0 ; i<MAX ; i++) {
        total += pedidos[i].getQuant() * pedidos[i].getPreco();
    }

    return total;
}