#pragma once
#include "Pedido.h"
#define MAX 50

class MesaRestaurante
{
    public:
        MesaRestaurante();
        void adicionaAoPedido(Pedido ped);
        std::string toString();
        void zeraPedidos();
        double calculaTotal();
    private:
        Pedido pedidos[MAX];
        int indice;
};
