#pragma once
#include <exception>
#include <string>

class ValorAbaixoException : public std::exception{
    private:
    std::string msg = "Valor Abaixo";

    public:
    ValorAbaixoException();
    std::string erro();

};