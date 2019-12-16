#pragma once
#include <string>

using namespace std;

class Data
{
private:
	int dia;
	int mes;
	int ano;

public:
	//Construtor com 3 par�metros para checar se a data � v�lida
	Data();
	Data(int day, int month, int year);

	//Fun��es set
	void setDia(int day);
	void setMes(int month);
	void setAno(int year);

	//Fun��es get e m�todos
	void getData();
	int getDia();
	int getMes();
	int getAno();
	bool isBissexto(int year);
	int compara(Data ob2);
	string getMesExtenso(int month);
};

