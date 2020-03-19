#include <iostream>
#include "SaldoIndisponivel.h"
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main () {
    //Criando um objeto Conta
    Conta *c1 = new Conta("Camila Pitanga", 52000, "12345-656-87", 100000, 500000);

    //Criando um objeto Conta especial
    ContaEspecial *ce1 = new ContaEspecial();

    //Setando valores para os objetos da Conta Especial 
    ce1->setNomeCliente("Marco Polo");
    ce1->setSalarioMensal(10000);
    ce1->setNumeroConta("12-9875-56");
    ce1->setSaldo(50000);
    ce1->setLimite(55000);

    //No construtor foi inicializado o limite 500000 e o salario mensal como 52000, como podemos ver no cout abaixo
    cout << "Conta Normal" << endl;
    cout << "nome: " << c1->getNomeCliente() << endl;
    cout <<"Salario Mensal: " << c1->getSalarioMensal() << endl;
    cout << "Saldo: " << c1->getSaldo() << endl;
    cout << "Limite: " << c1->getLimite() << endl;


    //Alguns valores para os parâmetros de valor dos métodos sacar, depositar no objeto de Conta (c1)
    /*Saque: maior que o saldo:*/ double maiorDoqueSaldo = 150000;
    /*Saque: menor que o saldo:*/ double menorQueSaldo = 70000;
    /*Depósito: maior que o limite*/ double  depositoMaior = 600000;
    /*Depósito: menor que o limite*/ double depositoMenor = 40000;

    
    //Aplicando o método sacar() no objeto c1 de Conta
    cout << "Saldo antes do saque: " << c1->getSaldo() << endl; //Antes do saque

    c1->sacar(maiorDoqueSaldo); //Este não saca nada e o saldo é o mesmo pois a variável tem valor maior que o saldo
    cout << "Saldo depois do saque falho: " << c1->getSaldo() << endl; // verificação das observações acima

    c1->sacar(menorQueSaldo); //Este saca e efetua a subtração de menorQueSaldo do saldo
    cout <<"Saldo depois do saque efetuado com sucesso: " << c1->getSaldo() << endl; // verificação das observações acima
    cout << endl << endl;


    //Metodo sacar2() com a  classe de excecao
    try{
        c1->sacar2(menorQueSaldo);//Saldo disponivel
        c1->sacar2(maiorDoqueSaldo);//Saldo indisponivel
    }catch(SaldoIndisponivel e){
        std::cout << e.msg_erro() << std::endl;
    }
   
   
    //Aplicando o método depositar() no objeto c1 de Conta
    cout << "Saldo antes do deposito: " << c1->getSaldo() << endl; // Antes do depósito

    c1->depositar(depositoMaior); //Este não deposita nada e o saldo continua o mesmo pois a variável tem valor maior que o limite
    cout << "Saldo depois do deposito falho: " << c1->getSaldo() << endl; // verificação das observações acima

    c1->depositar(depositoMenor); //Este deposita e efetua a adição de depositoMenor ao saldo
    cout <<"Saldo depois do deposito efetuado com sucesso: " << c1->getSaldo() << endl; // verificação das observações acima
    cout << endl << endl;


    //Ao convocarmos o metodo definirLimite() de Conta (c1), temos:
    c1->definirLimite();
    cout << "Novo limite: " << c1->getLimite() << endl; //Vemos que o limite foi restaurado para o dobro do salario mensal
    cout << endl << endl;

    delete c1;
//Aplicação dos metodos sacar() e depositar() no objeto ce1 da classe ContaEspecial
    
    //No construtor foi inicializado o limite 55000 e o salario mensal como 10000, como podemos ver no cout abaixo
    cout << "Conta Especial" << endl;
    cout << "Nome:" << ce1->getNomeCliente() << endl;
    cout << "Salario Mensal: " << ce1->getSalarioMensal() << endl;
    cout << "Saldo: " << ce1->getSaldo() << endl;
    cout << "Limite: " << ce1->getLimite() << endl;


    //Alguns valores para os parâmetros de valor dos métodos sacar, depositar no objeto de ContaEspecial (ce1)
    /*Saque: maior que o saldo:*/ double maiorDoqueSaldo2 = 55000;
    /*Saque: menor que o saldo:*/ double menorQueSaldo2 = 40000;
    /*Depósito: maior que o limite*/ double  depositoMaior2 = 600000;
    /*Depósito: menor que o limite*/ double depositoMenor2 = 40000;

    
    //Aplicando o método sacar() no objeto cw1 de ContaEspecial
    cout << "Saldo antes do saque: " << ce1->getSaldo() << endl; //Antes do saque

    ce1->sacar(maiorDoqueSaldo2); //Este não saca nada e o saldo é o mesmo pois a variável tem valor maior que o saldo
    cout << "Saldo depois do saque falho: " << c1->getSaldo() << endl; // verificação das observações acima

    ce1->sacar(menorQueSaldo2); //Este saca e efetua a subtração de menorQueSaldo do saldo
    cout <<"Saldo depois do saque efetuado com sucesso: " << ce1->getSaldo() << endl; // verificação das observações acima
    cout << endl << endl;
    
   
    //Aplicando o método depositar() no objeto c1 de Conta
    cout << "Saldo antes do deposito: " << ce1->getSaldo() << endl; // Antes do depósito

    ce1->depositar(depositoMaior2); //Este não deposita nada e o saldo continua o mesmo pois a variável tem valor maior que o limite
    cout << "Saldo depois do deposito falho: " << ce1->getSaldo() << endl; // verificação das observações acima

    ce1->depositar(depositoMenor2); //Este deposita e efetua a adição de depositoMenor ao saldo
    cout <<"Saldo depois do deposito efetuado com sucesso: " << ce1->getSaldo() << endl; // verificação das observações acima
    cout << endl << endl;


    //Ao convocarmos o metodo definirLimite() de ContaEspecial (ce1), temos:
    ce1->definirLimite(ce1->getSalarioMensal());
    cout <<"Novo limite: " << ce1->getLimite() << endl; //Vemos que o limite foi restaurado para o triplo do salario mensal
    cout << endl << endl;

    delete ce1;

    return 0;
}