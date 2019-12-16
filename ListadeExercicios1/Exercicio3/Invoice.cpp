#include "Invoice.h"

using namespace std;

// Implementa��o das fun��es set e Construtor com par�metros

 Invoice::Invoice(int num_item, string desc_item, int quant, double preco_unidade) {
	
	setNumero(num_item);
	setDescricao(desc_item);
	setQuantidade(quant);
	setPrecoUnitario(preco_unidade);
};

void Invoice::setNumero(int num_item) {
	if (num_item < 0) {
		numero_produto = 0;
	}
	else {
		numero_produto = num_item;
	}
};


void Invoice::setDescricao(string desc_item) {
	descricao_item = desc_item;
};


void Invoice::setQuantidade(int quant) {
	if (quant < 0) {
		quantidade_item = 0;
	}
	else {
		quantidade_item = quant;
	}
};


void Invoice::setPrecoUnitario(double preco_unidade) {
	preco_unitario = preco_unidade;
};


//Implementa��o de fun��es get
int Invoice::getNumero() {
	return numero_produto;
};

string Invoice::getDescricao() {
	return descricao_item;
};

int Invoice::getQuantidade() {
	return quantidade_item;
};

double Invoice::getPrecoUnitario() {
	return preco_unitario;
};

double Invoice::getInvoiceAmount() {
	return quantidade_item * preco_unitario;
};