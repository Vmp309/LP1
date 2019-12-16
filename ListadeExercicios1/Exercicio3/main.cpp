#include "Invoice.h"
#include <iostream>

using namespace std;

int main() {

	// Declara��o de um objeto e obten��o dos atributos desse mesmo objeto
	Invoice Produto1 = Invoice(123456789, "Notebook barato e de segunda mao", 1, 1250);

	cout << "Numero do produto: " << Produto1.getNumero() << endl;
	cout << "Descri��o: " << Produto1.getDescricao() << endl;
	cout << "Quantidade: " << Produto1.getQuantidade() << endl;
	cout << "Preco unit�rio: " << Produto1.getPrecoUnitario() << endl;
	cout << "Fatura total: " << Produto1.getInvoiceAmount() << endl;

	
	// Modifica��o do objeto
	Produto1.setNumero(987654321);
	Produto1.setDescricao("Notebook novo completo para programadores");
	Produto1.setQuantidade(2);
	Produto1.setPrecoUnitario(5850);

	
	//Obten��o dos atributos do objeto j� modificado
	cout << "Numero do produto: " << Produto1.getNumero() << endl;
	cout << "Descri��o: " << Produto1.getDescricao() << endl;
	cout << "Quantidade: " << Produto1.getQuantidade() << endl;
	cout << "Preco unit�rio: " << Produto1.getPrecoUnitario() << endl;
	cout << "Fatura total: " << Produto1.getInvoiceAmount() << endl;
}