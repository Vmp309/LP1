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

	//Fun��es set
	void setHora(int hr);
	void setMinuto(int min);
	void setSegundo(int seg);
	void setHorario(int hr, int min, int seg);

	//Fun��es get
	int getHora();
	int getMinuto();
	int getSegundo();
	void getHorario();

	//M�todos
	void avancarHorario();
};

