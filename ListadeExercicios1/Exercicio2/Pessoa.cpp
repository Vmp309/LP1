#include "Pessoa.h"
#include <iostream>

using namespace std;

Pessoa::Pessoa(string nom) {
	setNome(nom);
	idade = 0;
	telefone = "";
}


Pessoa::Pessoa(string nom, int age, string tele) {
	setNome(nom);
	setIdade(age);
	setTelefone(tele);
}

void Pessoa::getPessoa() {
	getNome();
	getIdade();
	getTelefone();
}

string Pessoa::getNome() {
	return "Nome: " + nome;
}

void Pessoa::setNome(string n) {
	nome = n;
}

void Pessoa::setIdade(int age) {
	idade = age;
}

int Pessoa::getIdade() {
	return idade;
}

void Pessoa::setTelefone(string tele) {
	telefone = tele;
}

string Pessoa::getTelefone() {
	return "Telefone: " + telefone;
}