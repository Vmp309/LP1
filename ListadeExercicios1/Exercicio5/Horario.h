#pragma once
#include <iostream>

using namespace std;

class Horario
{
private:
	int hora;
	int minuto;
	int segundo;

public:
	Horario();
	Horario(int hr, int min, int seg);

	//Funções set
	void setHora(int hr);
	void setMinuto(int min);
	void setSegundo(int seg);
	void setHorario(int hr, int min, int seg);

	//Funções get
	int getHora();
	int getMinuto();
	int getSegundo();
	void getHorario();

	//Métodos
	void avancarHorario();
};

