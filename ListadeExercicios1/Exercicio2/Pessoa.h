#pragma once
#include <string>

using namespace std;

class Pessoa
{
private:
	string nome;
	int idade;
	string telefone;

public:
	Pessoa(string nom);
	Pessoa(string n, int age, string tele);

	void getPessoa();
	
	void setNome(string n);
	string getNome();

	void setIdade(int age);
	int getIdade();

	void setTelefone(string tele);
	string getTelefone();
};

