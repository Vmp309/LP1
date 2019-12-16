#include "Pessoa.h"
#include <iostream>

using namespace std;

int main() {

	//Setando objeto p1
	Pessoa p1 = Pessoa("Joana");
	cout << p1.getNome() << endl;
	
	//Setando objeto p2
	Pessoa p2 = Pessoa("Victoria", 19, "(00)91234-5678");
	cout << p2.getNome() << endl;
	cout << "Idade: " << p2.getIdade() << endl;
	cout << p2.getTelefone() << endl;

	// Modificado o objeto p2
	p2.setNome("Victoria Monteiro");
	p2.setIdade(20);
	p2.setTelefone("(89) 94321-1234");


	//Obtendo o objeto já modificado
	cout << p2.getNome() << endl;
	cout << "Idade: " << p2.getIdade() << endl;
	cout << p2.getTelefone() << endl;

	
}