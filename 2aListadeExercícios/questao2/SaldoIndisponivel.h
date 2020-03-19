#include <exception>
#include <string>

class SaldoIndisponivel : public std::exception{
    public:
    SaldoIndisponivel();
    std::string msg_erro();

    private:
    std::string e = "Saldo Indisponivel";

};