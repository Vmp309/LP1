#pragma once
#include <exception>
#include <string>

class ValorAcimaException : public std::exception {
    private:
        std::string msg = "Valor Acima";

    public:
        ValorAcimaException();

        std::string erro();
};