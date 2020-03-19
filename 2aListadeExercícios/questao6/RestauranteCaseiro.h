#pragma once
#include "MesaRestaurante.h"

class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();
        void adicionaAoPedido(Pedido p, int numMesa);
        double calculaTotalRestaurante();
        std::string toString();
    private:
        MesaRestaurante mesas[50];
};
