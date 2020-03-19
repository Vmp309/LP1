#pragma once
#include <exception> 
#include <string>

class ValorMuitoAcimaException : public std::exception{
    private:
        std::string msg = "Valor muito acima!";

    public:
        ValorMuitoAcimaException();

        std::string erro();
};