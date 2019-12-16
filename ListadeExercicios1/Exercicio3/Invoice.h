#pragma once
#include <string>

using namespace std;

class Invoice
{
private:
	int numero_produto;
	string descricao_item;
	int quantidade_item;
	double preco_unitario;

public:
	// Fun��es set e construtor com par�metros
	 Invoice(int num_item, string desc_item, int quant, double preco_unidade);

	void setNumero(int num_item);

	void setDescricao(string desc_item);

	void setQuantidade(int quant);

	void setPrecoUnitario(double preco_unidade);

	
	// Fun��es get
	int getNumero();

	string getDescricao();

	int getQuantidade();

	double getPrecoUnitario();

	double getInvoiceAmount();
};

